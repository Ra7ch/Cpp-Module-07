/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:02:17 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/29 09:42:55 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template<typename T, typename T2>
void iter(T *array, int N, T2& func) { 
	for (int i = 0; i < N; i++) {
		func(array[i]);
	}
}

template<typename T>
void f1(T a)
{
	std::cout << a << "\n";	
}

template<typename T>
void addOne(T& c) {
	c += 1;
}

#endif