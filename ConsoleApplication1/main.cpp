#include <iostream>
#include <string>
#include "roster.h"

////for student function test1&2
//#include "student.h"

using namespace std;

// is this needed??
//Student* parse(string);

int main()
{
    cout << "C867-Scripting & Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 011092415" << endl;
    cout << "Name: Max S" << endl;

    Roster classRoster;

    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Max,S,sample_email@wgu.edu,98,7,14,21,SOFTWARE" };
    
    cout << "Displaying all students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        classRoster.parse(studentData[i]);
    }
    classRoster.printAll();
    cout << endl;
  



    /*
    ////for student function test1 (default constructor)
    Student student;
    
    student.setstudentID("B1");
    student.setFirstName("Peter");
    student.setLastName("Parker");
    student.setEmailAddress("email@email.com");
    student.setAge(18);
    student.setDaysToCompleteCourse(0, 1);
    student.setDaysToCompleteCourse(1, 2);
    student.setDaysToCompleteCourse(2, 3);
    student.setDegreeProgram(SECURITY);

    cout << student.getstudentID() << endl;
    cout << student.getFirstName() << endl;
    cout << student.getLastName() << endl;
    cout << student.getEmailAddress() << endl;
    cout << student.getAge() << endl;
    cout << student.getDaysToCompleteCourse(1) << endl;
    cout << student.getDegreeProgram() << endl;

    student.print();
    */


    
    ////for student function test2 (parameterized constructor)
    /*
    Student* S = new Student("A1", "John", "Smith", "j@j.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
    S->print();
    delete S;
    */



    return 0;

}