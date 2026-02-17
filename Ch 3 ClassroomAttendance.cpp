#include <iostream>
using namespace std;

int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int attendance[max_row][max_column];
    int absent_count = 0;
    int present_count = 0;

    cout << "Enter '1' for each day a student is present, and '0' for each time a student is absent.\n";

    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cin >> attendance[row][column];
        }
        cout << row + 1 << " of " << max_row << " students have been accounted for.\n";
    }

    cout << endl;

    cout << "Day 1   Day 2   Day 3   Day 4\n";

    for (int row = 0; row < max_row; row++)
    {
        cout << "Student " << row + 1 << ": ";
        for (int column = 0; column < max_column; column++)
        {
            cout << attendance[row][column] << "\t";
        }
        cout << endl;
    }

    return 0;
}
