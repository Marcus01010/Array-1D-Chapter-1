#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int drone_battery[size];

	cout << "Enter the percentage for the day.\n";
	for (int index = 0; index < size; index++)
	{
		cin >> drone_battery[index];
	}

	cout << "Here are the five battery level through the month.\n";
	for (int index = 0; index < size; index++)
	{
		cout << drone_battery[index] << " " << endl;
	}cout << " \n";

	int low_count = 0;
	for (int index = 0; index < size; index++)
	{
		if (drone_battery[index] < 20)
		{
			low_count = low_count + 1;
		}
	}
	cout << "There are: " << low_count << " battery percentages that are below %20.\n";
	return 0;

}
