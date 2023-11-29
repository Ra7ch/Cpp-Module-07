/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:45:24 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/29 10:00:04 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

template <typename T>
class Array {
	private :
		T *array;
		unsigned int _size;

	public :
		// Exxception class
		class	InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		Array();
		Array(unsigned int n);
		
		Array (const Array& other);
		
		Array& operator= (const Array& other);
		T& operator[] (unsigned int index);
		const T& operator[] (unsigned int index) const;

		~Array();

		unsigned int size() const;
};

template <typename T>
Array<T>::Array() : _size (0) {
	array = NULL;
	array = new T[]();
}

template <typename T>
Array<T>::Array(unsigned int index) : _size (index) {
	array = NULL;
	array = new T[index];
}


template <typename T>
Array<T>::Array(const Array& other) : _size (other._size){
	array = NULL;
	*this = other;
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		if (array)
			delete[] array;
		array = new T[other.size()];
		_size = other._size;
		for (int i = 0; i < static_cast<int>(other.size()); i++)
			array[i] = other.array[i];
	}
	return (*this);
}


template <typename T>
T& Array<T>::operator[] (unsigned int index) {
	if (index >= this->size() || array == NULL)
		throw InvalidIndexException();
	return (array[index]);
}

template <typename T>
const T& Array<T>::operator[] (unsigned int index) const{
	if (index >= this->size() || array == NULL)
		throw InvalidIndexException();
	return (array[index]);
}


template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}


template <typename T>
Array<T>::~Array() {
	if (array)
		delete[] array;
}

template< typename T >
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}

#endif