/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:44:20 by ychng             #+#    #+#             */
/*   Updated: 2024/08/24 00:25:32 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <limits>

using std::cout;
using std::endl;

Span::Span() : size(0)
{
	// cout << "Default constructor called" << endl;
}

Span::~Span()
{
	// cout << "Destructor called" << endl;
}

Span::Span(const Span& src) : size(src.size)
{
	// cout << "Copied constructor called" << endl;
}

Span& Span::operator=(const Span& src)
{
	if (this != &src)
	{
		size = src.size;
		// cout << "Assignment operator called" << endl;
	}
	return *this;
}

Span::Span(unsigned int N) : size(N)
{}

void Span::addNumber(int number)
{
	if (vector.size() == size)
		throw ContainerFullException();
	vector.push_back(number);
}

void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	int dist = std::distance(begin, end);
	if (dist + vector.size() > size)
	{
		vector.insert(vector.end(), begin, begin + (size - vector.size()));
		throw ContainerFullException();
	}
	else
		vector.insert(vector.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (vector.size() < 2)
		throw ContainerEmptyException();

	std::vector<int> sorted = vector;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); i++)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (vector.size() < 2)
		throw ContainerEmptyException();
	int minNumber = *std::min_element(vector.begin(), vector.end());
	int maxNumber = *std::max_element(vector.begin(), vector.end());
	return (maxNumber - minNumber);
}



