// Name: Andrew Pinkerton
// Program Description: Intro to Inheritance
// Date: Oct 23, 2023

#include <iostream>
#include <string>
#include "person.h"

using namespace std;



int main()
{

	student atu;
	atu.setFirstName("Tony");
	atu.setLastName("Tiger");
	atu.setMajor("Computer Science");

	cout << "Name: " << atu.getFirstName() << " " << atu.getLastName() << endl;
	cout << "Major: " << atu.getMajor();

	/*
	is a relation

	single inheritance

	inheritance in c++ - this is where you use a parent class to pass down functions, etc to a child
	class. That child class can use that infromation to do its job.
	*/

	return 0;
}