#include <iostream>
#include <string>
#include "l181239student.h"
#include "l181239course.h"
using namespace std;

//students functions

//overloaded constructor
student::student(string u,string n,string r){
	username=u;
	name=n;
	roll=r;
	A=nullptr;
	noofcourses=0;
}

//copyconstructor
student::student(const student &a){
	username=a.username;
	name=a.name;
	roll=a.roll;
	A[a.noofcourses];
	for(int i=0;i<a.noofcourses;i++){
		A[i]=a.A[i];
	}
	noofcourses=a.noofcourses;
}

//equal operator
course &course::operator=(course& q){
	name=q.name;
	number=q.number;
	A[noofstudents];
	for(int i=0;i<q.noofstudents;i++){
	A[i]=q.A[i];
	}
	//roll=q.roll;
	//A[q.noofcourses];
	//noofcourses=q.noofcourses;
	//for(int i=0;i<q.noofcourses;i++){
	//A[i]=q.A[i];
	//}
	return *this;
}

//printing function
void student::print(){
	cout<<"Username is ";
	cout<<username<<endl;
	cout<<"Name is ";
	cout<<name<<endl;
	cout<<"Rollnumber is ";
	cout<<roll<<endl;
	cout<<"Course registered are "<<noofcourses<<endl;
	for(int i=0;i<noofcourses;i++){
	A[i].print();
	}
}

//function to add course
void student::addcourse(course *a){
	if(noofcourses==2){
		cout<<"Registration is full"<<endl;
	}
	else{
		if(A==nullptr){
			A=a;
			noofcourses++;
		}
		if(noofcourses==1){
			if(A[0].number!=a->number){
				course *B[2];
				B[0]=A[0];
				B[1]=*a;
				delete A;
				A=B;				
				noofcourses++;
			}else{
				cout<<"Course already registered"<<endl;
			}
		}
		cout<<"Course successfully registered"<<endl;
	}

}

//function to drop course
void student::dropcourse(course *a){
	bool found=false;
	if(noofcourses==0){
		cout<<"No course registered"<<endl;
	}
	else{
		for(int i=0;i<noofcourses;i++){
			if(A[i].number==a->number){
				delete A;
				A=nullptr;
				found=true;
				i=i+2;
			}else{
				found=false;
			}
		}
		if(!found){
			cout<<"Course not registered"<<endl;
		}else{
			cout<<"Course successfully droped"<<endl;
		}
	}
}

//course functions