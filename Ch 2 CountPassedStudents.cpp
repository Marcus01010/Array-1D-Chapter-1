#include <iostream>
using namespace std;

void count_pass(int marks[], int size);

int main()
{
int size = 5;
int marks[size] = {35, 78, 40, 22, 90};

count_pass(marks, size);

return 0;
}

void count_pass(int marks[], int size)
{
int pass_count = 0;

for (int index = 0; index < size; index++)
{
if (marks[index] >= 40)
{
pass_count++;
}
}

cout << "Passed students: " << pass_count << endl;
}
