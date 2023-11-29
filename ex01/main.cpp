/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:09:24 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/29 09:52:55 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main () {
    // trying int array
    int a[] = {0, -1, 65, 87};
    
    iter(a, 4, addOne<int>);
    for (int i = 0; i < 4; i++) {
        std::cout<< a[i] << std:: endl;
	}

	//trying char
	char b[] = {'R', 'C', 'f', '1', '8'};
	
	iter(b, 5, f1<const int>);
	for (int i = 0; i < 5; i++) {
		std::cout<< b[i] << std:: endl;
	}

	// trying std:: string
	std::string c[] = {"rachid", "rach", "simo"};
	
	iter(c, 3, addOne<std::string>);
	for (int i = 0; i < 3; i++) {
		std::cout<< c[i] << std:: endl;
	}
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }
