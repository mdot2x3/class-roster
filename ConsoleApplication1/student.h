#pragma once
#include "degree.h"

// required to prevent errors
using namespace std;

const static int arraySize = 3;

class Student {

public:
	// default constructor
	Student() = default;
	// parameterized constructor
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	// destructor
	~Student();

	// getters
	string getstudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysToCompleteCourse(int);
	DegreeProgram getDegreeProgram();

	// setters
	void setstudentID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setAge(int);
	void setDaysToCompleteCourse(int, int);
	void setDegreeProgram(DegreeProgram);

	// local functions
	void print();

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToCompleteCourse[arraySize];
	DegreeProgram degreeProgram;
};