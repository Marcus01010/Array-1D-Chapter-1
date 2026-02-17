#include <iostream>
using namespace std;

int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int marks[max_row][max_column];
    int best_cashier_index = 0;
    int best_cashier_total = 0;
    int comparative_cashier_total = 0;
    int day_index = 0;

    cout << "Enter the sales for the each of the four cashiers.\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cin >> marks[row][column];
        }
        cout << row + 1 << " of " << max_row << " cashiers have been accounted for.\n";
    }
    cout << endl;

    for (int row = 0; row < max_row; row++)
    {
        best_cashier_total = 0;

        for (int column = 0; column < max_column; column++)
        {
            best_cashier_total += marks[row][column];
        }

        if (best_cashier_total > comparative_cashier_total)
        {
            comparative_cashier_total = best_cashier_total;
            best_cashier_index = row;
        }
    }

    cout << "The best cashier is cashier " << best_cashier_index + 1 << ".\n";
    cout << "The best cashier total sales is $" << comparative_cashier_total << endl;

    return 0;
}
