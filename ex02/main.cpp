/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 02:02:20 by ychng             #+#    #+#             */
/*   Updated: 2024/08/24 15:53:44 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

template<typename T>
void print(std::stack<T> stk)
{
	std::cout << std::endl;
	std::cout << "Print stack:" << std::endl;
	while (!stk.empty())
	{
		std::cout << stk.top() << std::endl;
		stk.pop();
	}
}

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << ", Value: " << mstack.top() << std::endl << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		print(s);
	}
	std::cout << "\n\n\n\n";
	{
		MutantStack<std::string> mstack;

		mstack.push("one");
		mstack.push("two");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << ", Value: " << mstack.top() << std::endl << std::endl;
		mstack.push("three");
		mstack.push("four");
		mstack.push("five");
		mstack.push("six");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<std::string> s(mstack);
		print(s);
	}
	return 0;
}