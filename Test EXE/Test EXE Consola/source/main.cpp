#include <iostream>
#include <cstdio>
#include <Windows.h>
using namespace std;


int main(int number_of_arguments, const char* arguments[]) {

	system("chcp 1252");
	std::cout << "Hello сссс" << endl;
	//std::cout << "Hello сссс " << (number_of_arguments > 1 ? arguments[1] : " user ") << endl;
	return 0;
}