#pragma once
#include "degree.h"

// required to prevent errors
using namespace std;

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToCompleteCourse[3];
	DegreeProgram degreeProgram;

public:
	string getStudentId();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysToCompleteCourse(int);
	DegreeProgram getDegreeProgram();

	void setStudentId(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setAge(int);
	void setDaysToCompleteCourse(int, int);
	void setDegreeProgram(DegreeProgram);

	void print();
};