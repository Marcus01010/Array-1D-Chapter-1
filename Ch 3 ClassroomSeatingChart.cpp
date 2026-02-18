#include <iostream>
using namespace std;

int main()
{
const int ROWS = 3;
const int COLS = 4;
int seats[ROWS][COLS];

cout << "Enter roll numbers for a 3x4 seating chart:\n";

for (int row = 0; row < ROWS; row++)
{
for (int col = 0; col < COLS; col++)
{
cout << "Seat [" << row << "][" << col << "]: ";
cin >> seats[row][col];
}
}

cout << "\nSeating Chart:\n";

for (int row = 0; row < ROWS; row++)
{
for (int col = 0; col < COLS; col++)
{
cout << seats[row][col] << "\t";
}
cout << endl;
}

return 0;
}
