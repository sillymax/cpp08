/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 02:02:33 by ychng             #+#    #+#             */
/*   Updated: 2024/08/24 12:43:16by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

using std::cout;
using std::endl;

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T, Container>& src);
	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& src);

	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;

	iterator begin();
	iterator end();
	reverse_iterator rbegin();
	reverse_iterator rend();
};

#endif

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() : MutantStack<T, Container>::stack()
{
	// cout << "Default constructor called" << endl;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	// cout << "Destructor called" << endl;
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& src) : MutantStack<T, Container>::stack(src)
{
	// cout << "Copy constructor called" << endl;
}


template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& src)
{
	if (this != &src)
	{
		MutantStack<T, Container>::stack::operator=(src);
	}
	// cout << "Assignment constructor called" << endl;
	return *this;
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return this->c.end();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin()
{
	return this->c.rbegin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend()
{
	return this->c.rend();
}
