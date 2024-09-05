#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// constructor implementation
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	daysToCompleteCourse[0] = daysInCourse1;
	daysToCompleteCourse[1] = daysInCourse2;
	daysToCompleteCourse[2] = daysInCourse3;
	this->degreeProgram = degreeProgram;

}

// destructor
Student::~Student() {
}

// getters
string Student::getStudentID() {
	return studentID;
}
string Student::getFirstName() {
	return firstName;
}
string Student::getLastName() {
	return lastName;
}
string Student::getEmailAddress() {
	return emailAddress;
}
int Student::getAge() {
	return age;
}
int Student::getDaysToCompleteCourse(int arrayPosition) {
	return daysToCompleteCourse[arrayPosition];
}
DegreeProgram Student::getDegreeProgram() {
	return degreeProgram;
}

// setters
void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}
void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::setLastName(string lastName) {
	this->lastName = lastName;
}
void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}
void Student::setAge(int age) {
	this->age = age;
}
void Student::setDaysToCompleteCourse(int arrayPosition, int value) {
	daysToCompleteCourse[arrayPosition] = value;
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

// converts enum value to string for print()
string degreeProgramToString(DegreeProgram degreeProgram) {
	switch (degreeProgram) {
		case SECURITY: return "SECURITY";
		case NETWORK: return "NETWORK";
		case SOFTWARE: return "SOFTWARE";
		default: return "N/A";
	}
}

void Student::print() {
	cout << getStudentID() << "\t" << getFirstName() << "\t" << getLastName() << "\t" << getAge() << "\t" <<
		"{" << getDaysToCompleteCourse(0) << "," << getDaysToCompleteCourse(1) << "," << getDaysToCompleteCourse(2) << "}" << "\t" << degreeProgramToString(getDegreeProgram()) << "\t" << endl;
}