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
		cout << "Enter the details for Student " << (index + 1) << endl;

		cout << "Enter roll number: ";
		cin >> students[index].roll_number;

		cin.ignore();

		cout << "Enter the name: ";
		cin.getline(students[index].name, 50);

		cout << "Enter marks: ";
		cin >> students[index].marks;
	}

	for (int index = 0; index < 3; index++)
	{
		cout << "Student " << (index + 1) << ": ";
		cout << "Roll Number = " << students[index].roll_number << ", ";
		cout << "Name = " << students[index].name << ", ";
		cout << "Marks = " << students[index].marks << endl;
	}


	return 0;
}
