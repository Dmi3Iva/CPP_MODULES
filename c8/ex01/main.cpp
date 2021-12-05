//
// Created by Shandy Mephesto on 9/15/21.
//

#include "span.hpp"

int main()
{
	std::cout << "=== EASY TESTS ===" << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(123);
	}
	catch (std::out_of_range &e)
	{
		std::cout << "caught error while trying to add" << e.what() <<
				  std::endl;
	}

	Span empty(0);

	try
	{
		empty.shortestSpan();
	}
	catch (std::out_of_range &e)
	{
		std::cout << "caught error while trying to get shortest from span" <<
				  e.what() << std::endl;
	}

	try
	{
		empty.longestSpan();
	}
	catch (std::out_of_range &e)
	{
		std::cout << "caught error while trying to get shortest from span" <<
				  e.what() << std::endl;
	}

	std::cout << std::endl << "=== MID TESTS ===" << std::endl;

	Span tenT(10000);

	std::srand(std::time(NULL));
	try
	{
		while (1)
			tenT.addNumber(std::rand());
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Array was filled caught the error: " << e.what() <<
				  std::endl;
	}

	int shortSpan = tenT.shortestSpan();
	int longSpan = tenT.longestSpan();
	std::cout << "Shortest span: " << shortSpan << std::endl;
	std::cout << "Longest span: " << longSpan << std::endl;

	std::cout << std::endl << "=== HARD TESTS ===" << std::endl;
	Span twentyT(20000);

	try
	{
		while (1)
			twentyT.addNumber(std::rand());
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Array was filled caught the error: " << e.what() <<
		std::endl;
	}

	shortSpan = twentyT.shortestSpan();
	longSpan = twentyT.longestSpan();
	std::cout << "Shortest span: " << shortSpan << std::endl;
	std::cout << "Longest span: " << longSpan << std::endl;
}
