/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:40:09 by ychng             #+#    #+#             */
/*   Updated: 2024/08/24 00:15:44 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>

class Span
{
public:
	class ContainerFullException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Container is full!";
			}
	};

	class ContainerEmptyException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Container doesn't have enough value.";
			}
	};

	Span();
	~Span();
	Span(const Span& src);
	Span& operator=(const Span& src);

	Span(unsigned int N);

	void addNumber(int number);
	void addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
	int shortestSpan() const;
	int longestSpan() const;

private:
	std::vector<int> vector;
	unsigned int size;
};

#endif