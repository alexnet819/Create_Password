#include "Random_Str.hpp"

#include <random>
#include <iostream>
#include <string>
#include <vector>


Random_Str::Random_Str(){

	std::cout << "Decide the length of the String to be generated ";
	std::cin >> this->len;
}

Random_Str::Random_Str(unsigned int length):len(length)
{
	mt.seed(rnd());
}

Random_Str::~Random_Str() {


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


