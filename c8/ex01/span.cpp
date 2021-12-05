//
// Created by Shandy Mephesto on 9/15/21.
//

#include "span.hpp"

Span::Span(unsigned int n) : _n(n)
{}

Span::~Span()
{}

Span::Span(const Span &span)
{ *this = span; }

Span &Span::operator=(const Span &span)
{
	_n = span._n;
	_vArr = span._vArr;
	return *this;
}

void Span::addNumber(int number)
{
	if (_vArr.size() >= _n)
	{
		throw std::out_of_range("span is already full");
	} else _vArr.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator start,
			   std::vector<int>::iterator end)
{
	while(start != end)
	{
		addNumber(*start);
		++start;
	}
}

int Span::shortestSpan()
{
	if (_vArr.size() < 2)
		throw std::out_of_range("span is empty");
	int result = std::abs(_vArr[0] - _vArr[1]);
	for (std::vector<int>::iterator i = _vArr.begin(); i != _vArr.end(); ++i)
		for (std::vector<int>::iterator j = _vArr.begin(); j != _vArr.end();
			 ++j)
			if (i != j && std::abs(*i - *j) < result)
				result = std::abs(*i - *j);
	return result;
}

int Span::longestSpan()
{
	if (_vArr.size() < 2)
		throw std::out_of_range("span is empty");
	std::vector<int>::iterator max = std::max_element(_vArr.begin(), _vArr.end
	());
	std::vector<int>::iterator min = std::min_element(_vArr.begin(), _vArr.end());
//	std::cout << "max: " << max << std::endl;
//	std::cout << "min: " << min << std::endl;
	return *max - *min;
}

//int Span::_getMax()
//{
//	std::vector<int>::iterator it = _vArr.begin();
//	int max = *it;
//	for (; it != _vArr.end(); ++it)
//	{
//		if (max < *it)
//		{
//			max = *it;
//		}
//	}
//	return max;
//}
//
//int Span::_getMin()
//{
//	std::vector<int>::iterator it = _vArr.begin();
//	int min = *it;
//	for (; it != _vArr.end(); ++it)
//	{
//		if (min > *it)
//		{
//			min = *it;
//		}
//	}
//	return min;
//}
