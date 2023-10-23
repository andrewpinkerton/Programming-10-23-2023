#pragma once
#include <string>
using namespace std;

class person // parent class
{
public:
	//set functions
	void setFirstName(string text)
	{
		fName = text;
	}
	void setLastName(string text)
	{
		lName = text;
	}
	string getFirstName()
	{
		return fName;
	}
	string getLastName()
	{
		return lName;
	}
private:
	string fName, lName;
};

class student : public person
{
public:
	void setMajor(string text)
	{
		major = text;
	}
	string getMajor()
	{
		return major;
	}

private:
	string major;
};