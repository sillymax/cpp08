/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:49:39 by ychng             #+#    #+#             */
/*   Updated: 2024/08/23 20:00:44 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

void print(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::vector<int> vector;

	for (int i = 0; i < 19; i++)
		vector.push_back(i);
	try
	{
		std::vector<int>::iterator itr_vector = easyfind(vector, 10);
		std::cout << "Vector starting at 10:" << std::endl;
		for_each(itr_vector, vector.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << "\n";

	std::list<int> list;

	for (int i = 0; i < 10; i++)
		list.push_back(i);
	try
	{
		std::list<int>::iterator itr_list = easyfind(list, 2);
		std::cout << "List starting at 2:" << std::endl;
		for_each(itr_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}