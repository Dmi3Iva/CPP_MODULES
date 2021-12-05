//
// Created by Shandy Mephesto on 9/15/21.
//

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	std::vector<int> v;
	std::list<int> l;

	fill(v);
	fill(l);

	std::cout << "How containers filled?" << std::endl;
	for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << "it = " << *it << std::endl;

	std::cout << std::endl << "Trying to find some in vector" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		try
		{
			std::vector<int>::iterator it = easyfind(v, i);
			std::cout << "element found : " << *it << std::endl;
		}
		catch (std::out_of_range &e)
		{
			std::cout << e.what() << " " << i << std::endl;
		}
	}


	std::cout << std::endl << "Trying to find some in list" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		try
		{
			std::list<int>::iterator it = easyfind(l, i);
			std::cout << "element found : " << *it << std::endl;
		}
		catch (std::out_of_range &e)
		{
			std::cout << e.what() << " " << i << std::endl;
		}
	}
	return 0;
}