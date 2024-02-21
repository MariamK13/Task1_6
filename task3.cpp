#include <iostream>

int main()
{
	int x = 0;
	std::cout << "enter a number please" << std::endl;
	std::cin >> x;
	if (x == 0) {
		std::cout << "the number is 0" << std::endl;
	} else if (x > 0) {
		std::cout << "the number is positive" << std::endl;
	} else {
		std::cout << "the number is negative" << std::endl;
	}
	
	char grade;
	switch(x) {
		case 90 ... 100:
			grade = 'A';
			break;
		case 80 ... 89:
			grade = 'B';
			break;
		case 70 ... 79:
			grade = 'C';
			break;
		case 60 ... 69:
			grade =  'D';
			break;
		case 50 ... 59:
			grade = 'E';
			break;
		case 40 ... 49:
			grade = 'F';
			break;
		default:
			grade = 'Z';
			break;
		}
	
	std::cout << "your current level based on your grade is " << grade << std::endl;
	std::cout << "Printing numbers from 1 to 10" << std::endl;
	for (int i  = 1; i <= 10; ++i) {
		std::cout << i << " ";
	}
	
	
}
