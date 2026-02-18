#include <iostream>
using namespace std;

void input_usage(int daily_usage[], int day_count);
void display_usage(int daily_usage[], int day_count);
int total_usage(int daily_usage[], int day_count);
float average_usage(int daily_usage[], int day_count);
int highest_usage(int daily_usage[], int day_count);
int count_high_usage_days(int daily_usage[], int day_count);

int main()
{
int day_count = 7;
int daily_usage[day_count];
int menu_choice = 0;

input_usage(daily_usage, day_count);

while (menu_choice != 6)
{
cout << "\n\n===== Electricity Usage Menu =====";
cout << "\n1. Display daily usage";
cout << "\n2. Total weekly usage";
cout << "\n3. Average daily usage";
cout << "\n4. Highest usage";
cout << "\n5. Count days above 10 units";
cout << "\n6. Exit";
cout << "\nEnter your choice: ";
cin >> menu_choice;

switch (menu_choice)
{
case 1:
display_usage(daily_usage, day_count);
break;

case 2:
cout << "\nTotal weekly usage = " << total_usage(daily_usage, day_count);
break;

case 3:
cout << "\nAverage daily usage = " << average_usage(daily_usage, day_count);
break;

case 4:
cout << "\nHighest usage = " << highest_usage(daily_usage, day_count);
break;

case 5:
cout << "\nDays above 10 units = " << count_high_usage_days(daily_usage, day_count);
break;

case 6:
cout << "\nExiting... Goodbye!";
break;

default:
cout << "\nInvalid choice. Please enter 1 to 6.";
}
}

return 0;
}

void input_usage(int daily_usage[], int day_count)
{
cout << "Enter daily usage for " << day_count << " days:\n";

for (int i = 0; i < day_count; i++)
{
cout << "Day " << (i + 1) << ": ";
cin >> daily_usage[i];
}
}

void display_usage(int daily_usage[], int day_count)
{
cout << "\nDaily usage: ";

for (int i = 0; i < day_count; i++)
{
cout << daily_usage[i] << " ";
}
}

int total_usage(int daily_usage[], int day_count)
{
int sum = 0;

for (int i = 0; i < day_count; i++)
{
sum += daily_usage[i];
}

return sum;
}

float average_usage(int daily_usage[], int day_count)
{
return (float)total_usage(daily_usage, day_count) / day_count;
}

int highest_usage(int daily_usage[], int day_count)
{
int highest = daily_usage[0];

for (int i = 1; i < day_count; i++)
{
if (daily_usage[i] > highest)
{
highest = daily_usage[i];
}
}

return highest;
}

int count_high_usage_days(int daily_usage[], int day_count)
{
int count = 0;

for (int i = 0; i < day_count; i++)
{
if (daily_usage[i] > 10)
{
count++;
}
}

return count;
}
