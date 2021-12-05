//
// Created by Shandy Mephesto on 9/12/21.
//

#include <stdint.h>
#include <iostream>
#include <iomanip>

struct Data
{
	int val;
	char c;
};


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

void printData(Data data)
{
	std::cout << "print data c:" << data.c << ", val:" << data.val << std::endl;
	std::cout << "address " << &data << std::endl;
}

int main (void)
{
	Data data;

	data.val = 1;
	data.c = 'x';
	printData(data);
	std::cout << std::endl;

	uintptr_t ser = serialize(&data);

	std::cout << "uintptr_t after serialize: " << ser << std::endl << std::endl;

	Data *deser = deserialize(ser);
	std::cout << "Data after deserialize" << std::endl;
	printData(*deser);
	return 0;
}