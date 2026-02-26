#include <iostream>
using namespace std;

struct Registration
{
int student_id;
char student_name[50];
char course_code[20];
int credits;
};

int main()
{
Registration records[4];
int total_credits = 0;

for (int index = 0; index < 4; index++)
{
cout << "\nEnter details for Student " << (index + 1) << endl;

cout << "Student ID: ";
cin >> records[index].student_id;

cin.ignore();

cout << "Student Name: ";
cin.getline(records[index].student_name, 50);

cout << "Course Code: ";
cin.getline(records[index].course_code, 20);

cout << "Credits: ";
cin >> records[index].credits;

total_credits += records[index].credits;
}

cout << "\n===== Course Registration Details =====\n";

for (int index = 0; index < 4; index++)
{
cout << "Student " << (index + 1) << ": ";
cout << "ID = " << records[index].student_id << ", ";
cout << "Name = " << records[index].student_name << ", ";
cout << "Course = " << records[index].course_code << ", ";
cout << "Credits = " << records[index].credits << endl;
}

cout << "\nTotal Credits Registered: " << total_credits << endl;

return 0;
}
