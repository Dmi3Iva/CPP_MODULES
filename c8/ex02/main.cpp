//
// Created by Shandy Mephesto on 9/15/21.
//

#include <iostream>
#include <string>
#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.push(123);

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

		std::cout << std::endl << "my tests" << std::endl;
		if (!s.empty())
			std::cout << "copied s stack is not empty" << std::endl;

		std::cout << "the last element with top vs last iterator" << std::endl;
		std::cout << "top: " << s.top() << std::endl;
		MutantStack<int>::iterator i = mstack.end();
		--i; // don't do this in production
		std::cout << "top: " << *i << std::endl;
	}

	{
		std::cout << "check stack string" << std::endl;
		MutantStack<std::string> stack;
		stack.push("Hi");
		stack.push("World");
		stack.push("!");
		MutantStack<std::string>::iterator it = stack.begin();
		MutantStack<std::string>::iterator ite = stack.end();

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

	}

	return 0;
}