// Created by Benjamin Rome on 8/5/19
// The goal is to understand how to declare and use variables with cin and cout

#include <iostream>
#include <string> // We need to include this if we want strings!
using namespace std;

int main() {
	// This whole thing will break if someone doesn't follow these instructions exactly
	cout << "Enter your name and age, seperated by a space" << std::endl;
	string name;
	int age {0};
	cin >> name >> age; // It's nice that this is so simple compared to a language like Java
	cout << "So, your name is " << name << " and you are " << age << " years old!\n" << endl;
	
	cout << "These are the variable types that we can use" << endl;
	
	cout << "This is a character type. It must use single quotes" << endl;
	char my_char {'B'}; // Must use single quotes!
	cout << "Example: " << my_char << " Size: " << sizeof(my_char) << " Byte" << endl;
	
	cout << "This is a short int type\n";
	short my_short_int {55};
	cout << "Example: " << my_short_int << " Size: " << sizeof(my_short_int) << " Bytes" << endl;
	
	cout << "This is a normal int type\n";
	int my_int {5523412};
	cout << "Example: " << my_int << " Size: " << sizeof(my_int) << " Bytes" << endl;
	
	// Note that specific sized ints are also avaiable. _int8, _int16, _int32, _int64
	
	cout << "This is a long int type\n";
	long my_long {70'000'0003}; // You can use the ticks to seperate large numbers
	cout << "Example: " << my_long << " Size: " << sizeof(my_long) << " Bytes" << endl;
	
	cout << "This is a long long int type\n";
	long long my_long_long {70'000'0003123132}; // You can use the ticks to seperate large numbers
	cout << "Example: " << my_long_long << " Size: " << sizeof(my_long_long) << " Bytes" << endl;
	
	cout << "This is a float type\n";
	float my_float {3.14};
	cout << "Example: " << my_float << " Size: " << sizeof(my_float) << " Bytes" << endl;
	
	cout << "This is a double type\n";
	double my_double {3.141596};
	cout << "Example: " << my_double << " Size: " << sizeof(my_double) << " Bytes" << endl;
	
	cout << "This is a long double type\n";
	double my_long_double {3.14159612312};
	cout << "Example: " << my_long_double << " Size: " << sizeof(my_long_double) << " Bytes" << endl;
	
	return 0;
}