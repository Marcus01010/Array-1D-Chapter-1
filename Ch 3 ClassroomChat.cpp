#include <iostream>
using namespace std;


int main()
{
    const int max_row = 3;
    const int max_column = 5;
    int marks[max_row][max_column];

    //use a nested for loop to fill out the array that is called marks
    cout << "Enter the input for the 2-Dimensional array. There are 15 imputs.\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cin >> marks[row][column];
            
        }
        cout << "Row " << row + 1 << " of "<<max_row<<" has been filled.\n";
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
