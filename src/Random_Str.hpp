#pragma once
#ifndef _RAMDCOM_STR_HPP_
#define _RAMDOM_STR_HPP_

#include <vector>
#include <string>
#include <random>

class Random_Str
{
public:
	Random_Str();
	Random_Str(unsigned int length);
	~Random_Str();
	
	std::string Create_Str(std::string candidate_chars);

private:
	std::random_device rnd;
	std::mt19937 mt;

	unsigned int len;

};

#endif //_RAMDCOM_STR_HPP_