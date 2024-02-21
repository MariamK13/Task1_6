//task4. Write a program that contains functions for basic arithmetic operations (add, subtract, multiply, divide).
#include <iostream>

int add (int& a, int& b);
int sub (int& a, int& b);
int mul (int& a, int& b);
int divide (int& a, int& b);

int main()
{

	int a = 0;
	int b = 0;
	std::cout << "enter two numbers for basic arithmetic operations" << std::endl;
	std::cin >> a >> b;
	char choose;
	std::cout << "enter the opcode you want to operate for a and b" << std::endl;
	std::cin >> choose;
	switch(choose) {
			case '+':
					std::cout << "The sum of a and b is " << add(a, b) << std::endl;
					break;
			case '-':
					std::cout << "The subtraction of a and b is " << sub(a, b) << std::endl;
					break;
			case '*':
					std::cout << "The product of a and b is " << mul(a, b) << std::endl;
					break;
			case '/': 
					std::cout << "The division of a and b is " << divide(a, b) << std::endl;
					break;
			default:
					std::cout << "Invalid opcode" << std::endl;
					break;
		}
}

int add (int& a, int& b)
{
	return a + b;
}

int sub (int& a, int& b) 
{
	return a - b;
}

int mul (int& a, int& b)
{
	return a * b;
}

int divide (int& a, int& b)
{
	if (b != 0) {
		return a / b;
	} 
	std::cout << "invalid operation" << std::endl;
	return 0;
}


