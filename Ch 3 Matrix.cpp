
#include <iostream>
using namespace std;

const int max_row = 2;
const int max_column = 3;
int table_a[max_row][max_column];
int table_b[max_row][max_column];

int main()
{
    cout << "Enter the values for a matrix A (2x3): \n";
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cout << "A[" << row << "][" << column << "]: ";
            cin >> table_a[row][column];
        }
        //cout << "Row " << row + 1 << " of " << max_row << " has been filled.\n";
    }

    cout << endl;

    cout << "Matrix B (copy of A): " << endl;
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            table_b[row][column] = table_a[row][column];
            cout << table_b[row][column] << "\t";
        }
        cout << endl;
    }

    return 0;
}
