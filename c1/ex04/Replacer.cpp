//
// Created by Shandy Mephesto on 8/14/21.
//

#include "Replacer.hpp"

Replacer::Replacer(std::string filename) : _filename(filename)
{}

int Replacer::replace(std::string str1, std::string str2)
{
	std::string input;
	std::ifstream ifs(_filename);
	std::ofstream ofs(_filename + ".replace");

	if(!ifs.is_open())
	{
		std::cerr << "Error: can't open file to read"<< std::endl;
		return 3;
	}

	if (!ofs.is_open())
	{
		std::cerr << "Error: can't open file to write" << std::endl;
		return 4;
	}

	while (!ifs.eof())
	{
		std::getline(ifs, input);
		ofs << _replaceInString(input, str1, str2) << std::endl;
	}

	return 0;
}

std::string Replacer::_replaceInString(
		std::string initString,
		std::string	whatReplace,
		std::string toReplace
	)
{
	std::string result;
	size_t whatReplaceSize = whatReplace.size();

	for(size_t i = 0; i < initString.size(); ++i)
	{
		if (initString.substr(i, whatReplaceSize) == whatReplace)
		{
			result += toReplace;
			i += whatReplaceSize - 1;
		}
		else
		{
			result +=initString[i];
		}
	}
	return result;
}