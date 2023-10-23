//Write a program that does the following :
//1. Make a parent class called person with the following variables : first name, last name, street address, city, state, zip, phone number
//2. Make a child class called student that inherits from person.This class will have the following variables : GPA, major, credit hours, anticipated year of graduation
//3. Get data for all of the above variables(keyboard or input file.Your choice)
//4. Determine the average GPA for all students
//5. Determine the highest / lowest GPA
//6. Output everything to the screen
//Assignment Notes :
//Make variables either arrays or vectors - your choice
//I expect to see functions throughout this program.You have been doing this long enough that should know what needs to be in a function
//Do not use bubble sort to find the highest / lowest values.Also, do not use the prebuilt functions(min / max)
//General Notes :

// Name: Andrew Pinkerton
// Program Description: Inheritance
// Date: Oct 23, 2023

#include <iostream>
#include <string>

using namespace std;

class parent
{
public:
	void setfName(string text)
	{
		fName = text;
	}
	void setlName(string text)
	{
		lName = text;
	}
	void setAddress(string text)
	{
		address = text;
	}
	void setCity(string text)
	{
		city = text;
	}
	void setState(string text)
	{
		state = text;
	}
	void setPhone(string text)
	{
		phone = text;
	}
	void setZip(int text)
	{
		zip = text;
	}
	string getfName()
	{
		return fName;
	}
	string getlName()
	{
		return lName;
	}
	string getAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}
	string getPhone()
	{
		return phone;
	}
	int getZip()
	{
		return zip;
	}
private:
	string fName, lName, address, city, state, phone;
	int zip;
};

class student : parent
{
public:
	void setGpa(double text)
	{
		gpa = text;
	}
	void setMajor(string text)
	{
		major = text;
	}
	void setcHours(int text)
	{
		cHours = text;
	}
	void setyGrad(int text)
	{
		yGrad = text;
	}
	double getGpa()
	{
		return gpa;
	}
	string getMajor()
	{
		return major;
	}
	int getcHours()
	{
		return cHours;
	}
	int setyGrad()
	{
		return yGrad;
	}

private:
	double gpa;
	string major;
	int cHours, yGrad;
};


int main()
{








}