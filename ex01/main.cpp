/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:09:24 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/27 14:30:50 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main () {
    // trying int array
    int a[] = {0, -1, 65, 87};
    
    iter(a, 4, &addOne);
    for (int i = 0; i < 4; i++) {
        std::cout<< a[i] << std:: endl;
	}

	// trying char
	char b[] = {'R', 'C', 'f', '1', '8'};
	
	iter(b, 5, &addOne);
	for (int i = 0; i < 5; i++) {
		std::cout<< b[i] << std:: endl;
	}

	// // trying std:: string
	// std::string b[] = {"rachid", "rach", "simo"};
	
	// iter(b, 3, &addOne);
	// for (int i = 0; i < 3; i++) {
	// 	std::cout<< b[i] << std:: endl;
	// }
	
}