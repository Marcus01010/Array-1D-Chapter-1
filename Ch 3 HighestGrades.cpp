#include <iostream>
using namespace std;

int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int marks[max_row][max_column];

    // Use a nested for loop to fill out the array called marks
    cout << "Enter the grades of each of the four students.\n";

    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cin >> marks[row][column];
        }
        cout << "Student " << row + 1 << " of " << max_row << " has been graded.\n";
    }

    cout << endl;

    cout << "Highest marks for each student:\n";
    for (int row = 0; row < max_row; row++)
    {
        int max_value = marks[row][0];

        for (int column = 1; column < max_column; column++)
        {
            if (marks[row][column] > max_value)
            {
                max_value = marks[row][column];
            }
        }

        cout << "Student " << (row + 1) << " highest = " << max_value << endl;
    }

    return 0;
}
