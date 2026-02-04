#include <iostream>
using namespace std;

void print_array(int numbers[], int size);


int main()
{
	const int size = 5;
	int numbers[size] = { 12, 6, 13, 8, 2 };

	print_array(numbers, size);

	return 0;
}


void print_array(int numbers[], int size)
{
	
	for (int index = 0; index < size; index++)
	{
		if (numbers[index] < 10)
		{
			numbers[index] = 10;
			cout << numbers[index]<<"\t";
		}
		else
		{
			cout << numbers[index] << "\t";
		}
	}
}
