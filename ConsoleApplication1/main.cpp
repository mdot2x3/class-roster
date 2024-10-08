#include <iostream>
#include <string>
#include "roster.h"

using namespace std;

int main()
{
    cout << "C867-Scripting & Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 011092415" << endl;
    cout << "Name: Max S" << endl;
    cout << endl;

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
  
    cout << "Displaying invalid emails:" << endl;
    classRoster.printInvalidEmails();
    cout << endl;

    cout << "Displaying average days in course:" << endl;
    for (int i = 0; i < numStudents; i++) {
        string studentID = classRoster.classRosterArray[i]->getStudentID();
        classRoster.printAverageDaysInCourse(studentID);
        cout << endl;
    }
    cout << endl;

    cout << "Showing students in degree program: SOFTWARE" << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;

    cout << "Removing A3:" << endl;
    classRoster.remove("A3");
    classRoster.printAll();
    cout << endl;

    cout << "Removing A3 again:" << endl;
    classRoster.remove("A3");
    cout << endl;


    return 0;
}