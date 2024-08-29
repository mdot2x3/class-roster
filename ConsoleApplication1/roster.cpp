#include <iostream>
#include <string>
#include "roster.h"

using namespace std;

// constructor implementation
// progam didn't run with constructor here, as mentioned may not be needed
//Roster::Roster() {
//}

// destructor
Roster::~Roster() {
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	classRosterArray[index++] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

void Roster::parse(string row) {
	size_t last = row.find(",");
	string studentID = row.substr(0, last);

	size_t first = last + 1;
	last = row.find(",", first);
	string firstName = row.substr(first, last - first);

	first = last + 1;
	last = row.find(",", first);
	string lastName = row.substr(first, last - first);

	first = last + 1;
	last = row.find(",", first);
	string emailAddress = row.substr(first, last - first);

	first = last + 1;
	last = row.find(",", first);
	int age = stoi(row.substr(first, last - first));

	first = last + 1;
	last = row.find(",", first);
	int daysInCourse1 = stoi(row.substr(first, last - first));

	first = last + 1;
	last = row.find(",", first);
	int daysInCourse2 = stoi(row.substr(first, last - first));

	first = last + 1;
	last = row.find(",", first);
	int daysInCourse3 = stoi(row.substr(first, last - first));

	first = last + 1;
	last = row.find(",", first);
	string strDegreeProgram = row.substr(first, last - first);

	DegreeProgram degreeProgram = DegreeProgram::SECURITY;
	if (strDegreeProgram == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (strDegreeProgram == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (strDegreeProgram == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}
	//return new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

	add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

void Roster::printAll() {
	for (int i = 0; i < 5; i++)
		classRosterArray[i]->print();
}