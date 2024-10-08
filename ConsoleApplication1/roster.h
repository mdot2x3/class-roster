#pragma once
#include "student.h"

const static int numStudents = 5;

class Roster {

public:
	int index = 0;
	Student* classRosterArray[numStudents];

	// default constructor
	Roster() = default;
	// destructor
	~Roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void parse(string row);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
};