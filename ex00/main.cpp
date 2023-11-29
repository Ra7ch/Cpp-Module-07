/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:21:53 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/29 10:38:05 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ()
{
	// trying int
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "************************************" << std::endl;
	
	// trying std::string.
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "************************************" << std::endl;

	// trying float
	float e = 4.56f;
	float f = 4.57f;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	std::cout << "************************************" << std::endl;

	// trying double
	double g = 98.7941;
	double h = 74.9534;
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	std::cout << "************************************" << std::endl;

	{
        int a = 1;
        int b = 2;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "a ptr: " << &a << ", b ptr: " << &b << std::endl;
        std::cout << "min: " << min(a, b) << std::endl;
        std::cout << "min ptr: " << &min(a, b) << std::endl;
    }
}