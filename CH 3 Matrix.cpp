#include <iostream>
using namespace std;

int main()
{
const int ROWS = 2;
const int COLS = 3;

int table_A[ROWS][COLS];
int table_B[ROWS][COLS];

cout << "Enter values for matrix A (2x3):\n";

for (int row = 0; row < ROWS; row++)
{
for (int col = 0; col < COLS; col++)
{
cout << "A[" << row << "][" << col << "]: ";
cin >> table_A[row][col];
}
}

for (int row = 0; row < ROWS; row++)
{
for (int col = 0; col < COLS; col++)
{
table_B[row][col] = table_A[row][col];
}
}

cout << "\nMatrix B (copy of A):\n";

for (int row = 0; row < ROWS; row++)
{
for (int col = 0; col < COLS; col++)
{
cout << table_B[row][col] << "\t";
}
cout << endl;
}

return 0;
}
