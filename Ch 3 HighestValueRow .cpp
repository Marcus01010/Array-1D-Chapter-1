#include <iostream>
using namespace std;

int main()
{
const int STUDENTS = 3;
const int SUBJECTS = 4;

int marks[STUDENTS][SUBJECTS];

cout << "Enter marks for 3 students and 4 subjects:\n";

for (int row = 0; row < STUDENTS; row++)
{
cout << "Student " << (row + 1) << ":\n";

for (int col = 0; col < SUBJECTS; col++)
{
cout << "Subject " << (col + 1) << ": ";
cin >> marks[row][col];
}
}

cout << "\nHighest mark for each student:\n";

for (int row = 0; row < STUDENTS; row++)
{
int max_value = marks[row][0];

for (int col = 1; col < SUBJECTS; col++)
{
if (marks[row][col] > max_value)
{
max_value = marks[row][col];
}
}

cout << "Student " << (row + 1) << " highest = " << max_value << endl;
}

return 0;
}
