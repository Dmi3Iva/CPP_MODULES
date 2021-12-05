//
// Created by Shandy Mephesto on 8/14/21.
//

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	switch(argc)
	{
		case 2:
			karen.complain(argv[1]);
			break;
		default:
			karen.complain("fool str");
	}

	return 0;
}