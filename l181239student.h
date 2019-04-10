
#include <iostream>
#include <cstring>
using namespace std;
#pragma once

class student{
	friend class course;
	string username;
	string name;
	string roll;
	course *A;
	int noofcourses;
	
	
public:
	friend ostream& operator<<(ostream& a,student& B){
	a<<"Username is ";
	a<<B.username<<endl;
	a<<"Name is ";
	a<<B.name<<endl;
	a<<"Rollnumber is ";
	a<<B.roll<<endl;
	for(int i=0;i<A.noofcourses;i++){
	B.A[i].print();
	}
	}
	
	student ();//default constructor
	student (const student &a);//copyconstructor
	student(string u,string n,string r);//overloaded constructor
  	void print();
	void addcourse(course *a);
	void dropcourse(course *a);

};




