#include <iostream>
using namespace std;

void input_marks(int student_marks[], int student_count);
void display_marks(int student_marks[], int student_count);
int total_marks(int student_marks[], int student_count);
float average_marks(int student_marks[], int student_count);
int count_passed(int student_marks[], int student_count);
int highest_mark(int student_marks[], int student_count);

int main()
{
int student_count = 5;
int student_marks[student_count];
int menu_choice = 0;

input_marks(student_marks, student_count);

do
{
cout << "\n\n===== Student Marks Menu =====";
cout << "\n1. Display all marks";
cout << "\n2. Find total marks";
cout << "\n3. Find average marks";
cout << "\n4. Count passed students";
cout << "\n5. Find highest mark";
cout << "\n6. Exit";
cout << "\nEnter your choice: ";
cin >> menu_choice;

switch (menu_choice)
{
case 1:
display_marks(student_marks, student_count);
break;

case 2:
cout << "\nTotal marks = " << total_marks(student_marks, student_count);
break;

case 3:
cout << "\nAverage marks = " << average_marks(student_marks, student_count);
break;

case 4:
cout << "\nPassed students = " << count_passed(student_marks, student_count);
break;

case 5:
cout << "\nHighest mark = " << highest_mark(student_marks, student_count);
break;

case 6:
cout << "\nExiting... Goodbye!";
break;

default:
cout << "\nInvalid choice. Please enter 1 to 6.";
}

} while (menu_choice != 6);

return 0;
}

void input_marks(int student_marks[], int student_count)
{
cout << "Enter marks for " << student_count << " students:\n";

for (int index = 0; index < student_count; index++)
{
cout << "Student " << (index + 1) << " mark: ";
cin >> student_marks[index];
}
}

void display_marks(int student_marks[], int student_count)
{
cout << "\nMarks of all students: ";

for (int index = 0; index < student_count; index++)
{
cout << student_marks[index] << " ";
}
}

int total_marks(int student_marks[], int student_count)
{
int sum_of_marks = 0;

for (int index = 0; index < student_count; index++)
{
sum_of_marks += student_marks[index];
}

return sum_of_marks;
}

float average_marks(int student_marks[], int student_count)
{
int sum_of_marks = total_marks(student_marks, student_count);
float average_value = (float)sum_of_marks / student_count;

return average_value;
}

int count_passed(int student_marks[], int student_count)
{
int passed_count = 0;

for (int index = 0; index < student_count; index++)
{
if (student_marks[index] >= 40)
{
passed_count++;
}
}

return passed_count;
}

int highest_mark(int student_marks[], int student_count)
{
int highest_value = student_marks[0];

for (int index = 1; index < student_count; index++)
{
if (student_marks[index] > highest_value)
{
highest_value = student_marks[index];
}
}

return highest_value;
}
