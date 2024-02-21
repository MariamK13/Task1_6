//task6. Create a program that declares an integer variable, a pointer variable, and a reference variable. Assign the address of the integer to the pointer and manipulate the data using both the pointer and the reference. Output the results to ensure an understanding of how pointers and references are used to access and modify data

#include <iostream>

int main()
{
	int x = 5;
	int* px = &x;
	int& rx = x;
	std::cout << "the initial number is " << x << std::endl;
	std::cout << "now that number through pointer is " << *px << std::endl;
	++rx;
	std::cout << "what became the initial number after preincrementing the refference of it " << x << std::endl;
	x = 19;
	std::cout << "What became the reference of that number after assignung it with another number " << rx << std::endl;
	
}
