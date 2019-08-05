// Created by Benjamin Rome on 8/5/19
// The goal is to understand how to declare and use variables with cin and cout

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter your name and age, seperated by a space" << std::endl;
	string name;
	int age {0};
	cin >> name >> age;
	
	cout << "So, your name is " << name << " and you are " << age << " years old!" << endl;
	
	return 0;
}