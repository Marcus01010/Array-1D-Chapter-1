#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int cost[size];
	cout << "Enter the costs of each fuel refill.\n";
	for (int index = 0; index < size; index++)
	{
		cin >> cost[index];
	}

	cout << "Here are you five costs.\n";
	for (int index = 0; index < size; index++)
	{
		cout << cost[index] << endl;
	}

	int max_cost = cost[0];
	for (int index = 0; index < size; index++)
	{
		if (cost[index] > max_cost)
		{
			max_cost = cost[index];
		}
	}
	cout << "Highest cost: " << max_cost << endl;




	return 0;

}
