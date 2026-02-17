#include <iostream>
using namespace std;

int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int marks[max_row][max_column];

    cout << "Enter the temperatures of the cities over the last four days.\n";
    for (int row = 0; row < max_row; row++)
    {
        cout << "City " << row + 1 << endl;
        for (int column = 0; column < max_column; column++)
        {
            cout << "\tDay " << column + 1 << ": ";
            cin >> marks[row][column];
        }
        //cout << "Row " << row + 1 << " of " << max_row << " has been filled.\n";
    }

    cout << endl;

    cout << "Temperature Table:\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cout << marks[row][column] << "\t";
        }
        cout << endl;
    }

    return 0;
}
