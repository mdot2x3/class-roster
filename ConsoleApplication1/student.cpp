#include <iostream>
#include <string>
#include "student.h"

using namespace std;

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

void Student::print() {
	cout << studentId << "\t" << firstName << "\t" << lastName << "\t" << emailAddress << "\t" << age << "\t" <<
		"{" << daysToCompleteCourse[0] << "," << daysToCompleteCourse[1] << "," << daysToCompleteCourse[2] << "}" << "\t" << degreeProgram << "\t" << endl;
}