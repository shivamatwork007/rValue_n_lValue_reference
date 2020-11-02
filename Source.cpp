#include <iostream>

void print(int& f_value) {
	std::cout << f_value << std::endl;
}
void print(int&& f_value) { //only accepts rValue lValue prohibited.
	std::cout << f_value << std::endl;
}
int main() {
	int i = 0;
	print(i);
	print(10); //gives error as we are passing rValue as refereence So we declare another function
}