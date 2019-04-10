
#include <iostream>
#include <cstring>
using namespace std;
#pragma once

class course{
	friend class student;
	string name;
	string number;
	student *A;
	void addstudent(student a);
	void dropstudent(student *a);
	int noofstudents;


public:
	course(string n,string t);//overloaded constructor
	course(const course &a); 
	course &operator=(course& q);
	void print();
};