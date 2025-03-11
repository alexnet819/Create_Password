#include <iostream>
#include <string>
#include <vector>
#include "Random_Str.hpp"

void displayPasswordTypes(const std::vector<std::string>& cand_str) {
	for (int i = 0; i < cand_str.size(); i++) {
		std::cout << "Password type[" << i << "]=" << cand_str[i] << std::endl;
	}
}

unsigned int getPasswordType() {
	unsigned int type;
	std::cout << "Enter password type (int):";
	std::cin >> type;
	return type;
}

unsigned int getPasswordLength() {
	unsigned int length;
	std::cout << "Enter the length of the password to be created (int):";
	std::cin >> length;
	return length;
}

int main() {
	unsigned int create_pass = 10;
	std::vector<std::string> cand_str = {
		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\\/.,!#$%&'()\"",
		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
		"0123456789abcdefghijklmnopqrstuvwxyz",
		"0123456789"
	};

	displayPasswordTypes(cand_str);
	unsigned int type = getPasswordType();
	unsigned int length = getPasswordLength();

	Random_Str PW(length);

	for (int i = 0; i < create_pass; i++) {
		std::cout << PW.Create_Str(cand_str[type]) << std::endl << std::endl;
	}

	return 0;
}