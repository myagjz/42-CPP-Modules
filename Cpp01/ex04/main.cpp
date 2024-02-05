/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:33:08 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 16:28:15 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
			return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cout << "Error opening input file: " << filename << std::endl;
		return (1);
	}

	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open())
	{
		std::cout << "Error creating output file: " << outputFilename << std::endl;
		inputFile.close();
		return (1);
	}

	std::string line;
	while (getline(inputFile, line))
	{
		std::string modifiedLine;
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			modifiedLine += line.substr(0, pos) + s2;
			line = line.substr(pos + s1.length());
			pos = 0;
		}
		modifiedLine += line;
		outputFile << modifiedLine << std::endl;
	}

	inputFile.close();
	outputFile.close();

	std::cout << "Replacement completed successfully." << std::endl;
	return (0);
}
