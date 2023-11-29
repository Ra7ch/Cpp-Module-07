/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:45:21 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/29 11:28:58 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL - 2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

// struct Data {
// 	int l;
// 	char c;
// };

// std::ostream& operator<<(std::ostream& os, const Data& data) {
// 	os << data.l << " , " << data.c;
//     return os;
// }

// // another main with const
// int main(int, char**)
// {
//     const Array<Data> numbers(MAX_VAL);
//     const Data* mirror = new Data[MAX_VAL];
//     srand(time(NULL));
//     //SCOPE
//     {
//         Array<Data> tmp = numbers;
//         Array<Data> test(tmp);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         std::cout << mirror[i] << std::endl;
//         std::cout << numbers[i] << std::endl;
//     }
	
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i].l != numbers[i].l)
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     delete [] mirror;//
//     return 0;
// }

// another main



// int main () {
// 	Array<std::string> array1(5);
// 	std::string *sys1 = new std::string();

// 	try {
// 		for(int i = 0; i < 5; i++)
// 			std::cout << array1[i] << "." <<  std::endl;
// 		std::cout << ">>" << sys1[0] << "." << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	Array<long> array2(5);
// 	long *sys2 = new long();

// 	try {
// 		for(int i = 0; i < 5; i++)
// 			std::cout << array2[i] << "." <<  std::endl;
// 		std::cout << ">>" << sys2[0] << "." << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	Array<Data> array3(5);
// 	Data *sys3 = new Data();

// 	try {
// 		for(int i = 0; i < 5; i++)
// 			std::cout << array3[i] << "." <<  std::endl;
// 		std::cout << ">>" << sys3[0] << "." << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }