//
// Created by Shandy Mephesto on 8/14/21.
//

#ifndef REPLACER_HPP
#define REPLACER_HPP
#include <iostream>
#include <fstream>
#include <string>

class Replacer
{
public:
	Replacer(std::string filename);
	int replace(std::string str1, std::string str2);

private:
	std::string _filename;
	std::string _replaceInString(
		std::string initString,
		std::string	whatReplace,
		std::string toReplace
		);
};


#endif //REPLACER_HPP
