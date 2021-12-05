//
// Created by Shandy Mephesto on 9/12/21.
//

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//

	Array<float> fArr(5);
	fArr[0] = 1;
	fArr[1] = 1.2;
	fArr[2] = 3.13;
	fArr[3] = 1;
	fArr[4] = 1;

	for(int i =0; i< 5; ++i)
		std::cout << fArr[i] << std::endl;

	const Array<char> cEmpty;
	try {
		std::cout << cEmpty[0] << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "Cant' iterate through array, the reason: " << e.what() <<
		std::endl;
	}

	const Array<int> cArr(5);

	for(int i =0; i< 5; ++i)
		std::cout << cArr[i] << std::endl;

	return 0;
}