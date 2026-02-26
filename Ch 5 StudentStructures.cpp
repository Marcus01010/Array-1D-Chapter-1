#include <iostream>
using namespace std;

struct Student
{
int roll_number;
char name[50];
float marks;
};

int main()
{
Student students[3];

for (int index = 0; index < 3; index++)
{
cout << "\n--- Enter details for Student " << (index + 1) << " ---\n";

cout << "Enter roll number: ";
cin >> students[index].roll_number;

cin.ignore();

cout << "Enter name: ";
cin.getline(students[index].name, 50);

cout << "Enter marks: ";
cin >> students[index].marks;
}

cout << "\n====================\n";
cout << " Student Details\n";
cout << "====================\n";

for (int index = 0; index < 3; index++)
{
cout << "Student " << (index + 1) << ": ";
cout << "Roll No = " << students[index].roll_number << ", ";
cout << "Name = " << students[index].name << ", ";
cout << "Marks = " << students[index].marks << endl;
}

return 0;
}
