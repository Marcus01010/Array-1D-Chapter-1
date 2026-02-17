#include <iostream> 
using namespace std;

int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int marks[max_row][max_column];

    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cout << " Seat [" << row << "][" << column << "]: ";
            cin >> marks[row][column];
        }
        //cout << "Row " << row + 1 << " of " << max_row << " has been filled.\n";
    }

    cout << endl;

    cout << "These are the inputs that were computed above.\n";

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
