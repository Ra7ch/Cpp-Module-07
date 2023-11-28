/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:02:17 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/28 07:02:24 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template<typename T>
void iter(T *array, int N, void (*func)(T&)) {
	if (array == NULL || func == NULL)
		return ;
	for (int i = 0; i < N; i++) {
		func(array[i]);
	}
}

template<typename T>
void addOne(T& c) {
	c += 1;
}

#endif