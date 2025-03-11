#include "Random_Str.hpp"

#include <random>
#include <iostream>
#include <string>
#include <vector>

Random_Str::Random_Str(unsigned int length = -1):len(length)
{
	mt.seed(rnd());
	if(length == -1)
	{
		std::cout << "Decide the length of the String to be generated ";
		std::cin >> this->len;
		}
	return;
}

Random_Str::~Random_Str() {
	this->len = 0;
}

std::string Random_Str::Create_Str(std::string candidate_chars)
{
	std::uniform_int_distribution<> rand(0, candidate_chars.size()-1);
	std::string random_str;

	for (int i = 0; i < len; i++) {
		random_str += candidate_chars[rand(mt)];
	}


	return random_str;
}


