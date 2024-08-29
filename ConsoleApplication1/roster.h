#pragma once

#include "student.h"

const static int numStudents = 5;

class Roster {

public:

	// default constructor
	Roster() = default;
	// parameterized constructor
	//Roster(string xyz);
	// destructor
	~Roster();

	// suggested to be placed here to allow main.cpp access (means this array contains pointers to objects of the class Student)
	//Student* classRosterArray[5];

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void parse(string row);
	//void remove(string studentID);
	void printAll();
	//void printAverageDaysInCourse(string studentID);
	//void printInvalidEmails();

private:
	int index = 0;
	Student* classRosterArray[numStudents];
};