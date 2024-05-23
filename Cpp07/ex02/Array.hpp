/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:47:05 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:47:06 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int _size;
	public:
		Array()
		{
			array = new T[0];
			_size = 0;
		}

		~Array()
		{
			delete[] array;
		}

		Array(unsigned int n)
		{
			array = new T[n];
			_size = n;
		}

		Array(const Array &copy)
		{
			array = NULL;
			*this = copy;
		}

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				if (array)
					delete[] array;
				_size = other._size;
				array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					array[i] = other.array[i];
			}
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= _size || i < 0)
				throw std::out_of_range("Index is out of bounds!");
			else
				return array[i];
		}

		unsigned int size() const
		{
			return _size;
		}
};
#endif
