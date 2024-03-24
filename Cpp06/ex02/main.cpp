/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:36:41 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:36:42 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
//#include <unistd.h>


int main()
{
	Base	*base = generate();
	identify(base);

	//usleep(2000000);
	Base	*base2 = generate();
	identify(*base2);

	delete base;
	delete base2;
}
