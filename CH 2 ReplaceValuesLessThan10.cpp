#include <iostream>
using namespace std;

void replace_small(int numbers[], int size);

int main()
{
int size = 5;
int numbers[size] = {5, 12, 8, 20, 3};

replace_small(numbers, size);

return 0;
}

void replace_small(int numbers[], int size)
{
for (int index = 0; index < size; index++)
{
if (numbers[index] < 10)
{
numbers[index] = 10;
}

cout << numbers[index] << " ";
}
}
