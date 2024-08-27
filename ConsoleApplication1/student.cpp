#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// constructor implementation
Student::Student(string sid, string fn, string ln, string e, int a, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram dp) {
	studentId = sid;
	firstName = fn;
	lastName = ln;
	emailAddress = e;
	age = a;
	daysToCompleteCourse[0] = daysInCourse1;
	daysToCompleteCourse[1] = daysInCourse2;
	daysToCompleteCourse[2] = daysInCourse3;
	degreeProgram = dp;
}

string Student::getStudentId() {
	return studentId;
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

void Student::setStudentId(string sid) {
	studentId = sid;
}
void Student::setFirstName(string fn) {
	firstName = fn;
}
void Student::setLastName(string ln) {
	lastName = ln;
}
void Student::setEmailAddress(string e) {
	emailAddress = e;
}
void Student::setAge(int a) {
	age = a;
}
void Student::setDaysToCompleteCourse(int arrayPosition, int value) {
	daysToCompleteCourse[arrayPosition] = value;
}
void Student::setDegreeProgram(DegreeProgram dp) {
	degreeProgram = dp;
}

// converts enum value to string
string degreeProgramToString(DegreeProgram dp) {
	switch (dp) {
		case SECURITY: return "SECURITY";
		case NETWORK: return "NETWORK";
		case SOFTWARE: return "SOFTWARE";
		default: return "N/A";
	}
}

void Student::print() {
	cout << studentId << "\t" << firstName << "\t" << lastName << "\t" << emailAddress << "\t" << age << "\t" <<
		"{" << daysToCompleteCourse[0] << "," << daysToCompleteCourse[1] << "," << daysToCompleteCourse[2] << "}" << "\t" << degreeProgramToString(degreeProgram) << "\t" << endl;
}