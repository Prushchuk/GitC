#pragma once
#include <iostream>
using namespace std;
struct Human
{
	char name[50];
	int age;

	void askForHuman() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
	}
};