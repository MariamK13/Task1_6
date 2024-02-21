// task5. define an array of integers and populate it with some values. Write functions to find the maximum, minimum, and average values in the array. 

#include <iostream>
#include <string>

const int size = 5;
int maximum (int arr[size]);
int minimum (int arr[size]);
float average (int arr[size]);

int main()
{
	srand(time(0));
	int arr[size];
	std::cout << "An array" << std::endl;
	for (int i = 0; i < size; ++i) {
		 arr[i] = 1 + rand() % 100;
	}
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "The maximum element in this array is " << maximum(arr) << std::endl;
	std::cout << "The minimum element in this array is " << minimum (arr) << std::endl;
	std::cout << "The average of this array is " << average(arr) << std::endl;	

	std::string str1 = "hello";
	std::string str2 = "world!";
	std::cout << "here we have two strings: string1 is " << str1  << "string2 is " << str2 << std::endl;

	std::cout << "the length of the first string is " << str1.size() << std::endl;
	std::cout << "the length of the second string is " << str2.size() << std::endl;
	std::cout << "the concatenation of the 1st and 2nd strings is " << str1 + str2 << std::endl;
	
}

int maximum (int arr[size]) {
	int max = arr[0];
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int minimum (int arr[size]) {
	int min = arr[0];
	for (int i = 0; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

float average (int arr[size])
{
	float res = 0;
	for (int i = 0; i < size; ++i) {
		res += arr[i];
	}
	return res / size;
}
