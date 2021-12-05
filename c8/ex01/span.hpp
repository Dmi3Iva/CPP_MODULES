//
// Created by Shandy Mephesto on 9/15/21.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>

class Span
{
public:
	Span(unsigned int n);
	~Span();
	Span(const Span &span);
	Span & operator = (const Span &span) ;
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator start,
				   std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int _n;
	std::vector<int> _vArr;

	int _getMax();
	int _getMin();

};


#endif
