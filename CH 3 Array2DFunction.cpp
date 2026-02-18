#include <iostream>
using namespace std;

const int max_row = 2;
const int max_col = 3;

void read_array(int marks[][max_col], int max_row);
void print_array(int marks[][max_col], int max_row);

int main()
{
int marks[max_row][max_col];

read_array(marks, max_row);
print_array(marks, max_row);

return 0;
}

void read_array(int marks[][max_col], int max_row)
{
for (int row = 0; row < max_row; row++)
{
for (int col = 0; col < max_col; col++)
{
cout << "Enter value for marks[" << row << "][" << col << "]: ";
cin >> marks[row][col];
}
}
}

void print_array(int marks[][max_col], int max_row)
{
cout << "\nMarks array:\n";

for (int row = 0; row < max_row; row++)
{
for (int col = 0; col < max_col; col++)
{
cout << marks[row][col] << " ";
}
cout << endl;
}
}
