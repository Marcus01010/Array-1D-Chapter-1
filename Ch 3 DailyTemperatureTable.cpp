#include <iostream>
using namespace std;

int main()
{
const int CITIES = 3;
const int DAYS = 4;
int temp[CITIES][DAYS];

cout << "Enter temperatures for 3 cities over 4 days:\n";

for (int row = 0; row < CITIES; row++)
{
cout << "City " << (row + 1) << ":\n";

for (int col = 0; col < DAYS; col++)
{
cout << "Day " << (col + 1) << ": ";
cin >> temp[row][col];
}
}

cout << "\nTemperature Table:\n";

for (int row = 0; row < CITIES; row++)
{
for (int col = 0; col < DAYS; col++)
{
cout << temp[row][col] << "\t";
}
cout << endl;
}

return 0;
}
