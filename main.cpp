#include <iostream>
#include <string>
#include <vector>
#include "Random_Str.hpp"


int main() {

	unsigned length;
	unsigned int create_pass = 10;
	std::vector<std::string> cand_str(4);
	cand_str[0] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\\/.,!#$%&'()\"";
	cand_str[1] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 
	cand_str[2] = "0123456789abcdefghijklmnopqrstuvwxyz";
	cand_str[3] = "0123456789";

	for (int i = 0; i < cand_str.size(); i++) {
		std::cout << "�p�X���[�h�^�C�v[" << i << "]=" << cand_str[i] << std::endl;
	}
	unsigned int type;
	std::cout << "�p�X���[�h�^�C�v����͂��Ă�������(int):";
	std::cin >> type;

	std::cout << "�쐬����p�X���[�h�̒�������͂��Ă�������(int)�F";
	std::cin >> length;

	Random_Str PW(length);

	for (int i = 0; i < create_pass; i++) {
		std::cout << PW.Create_Str(cand_str[type]) << std::endl << std::endl;
	}


	return 0;
}