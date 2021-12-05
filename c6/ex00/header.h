//
// Created by Shandy Mephesto on 9/9/21.
//

#ifndef HEADER_H
#define HEADER_H

#include <cstring>
#include <iostream>
#include <ctype.h>
#include <sstream>
#include <math.h>

bool	isNan(std::string str);
bool	isInf(std::string str);
bool	isValid(std::string str);
bool	isSomeConsts(std::string str);
bool	isStreamViewHasDotOrE(double d);
bool	isStreamViewHasDotOrE(float f);

void	toChar(std::string str);
int		parseInt(std::string s);

void	toInt(std::string str);
void	toDouble(std::string str);
void	toFloat(std::string str);

#endif
