#include <iostream>
using namespace std;

int main()
{
char first_string[100];
char second_string[100];

cout << "Enter first string: ";
cin >> first_string;

cout << "Enter second string: ";
cin >> second_string;

int first_count[26] = {0};
int second_count[26] = {0};

for (int index = 0; first_string[index] != '\0'; index++)
{
int position = first_string[index] - 'a';
first_count[position]++;
}

for (int index = 0; second_string[index] != '\0'; index++)
{
int position = second_string[index] - 'a';
second_count[position]++;
}

bool is_anagram = true;

for (int index = 0; index < 26; index++)
{
if (first_count[index] != second_count[index])
{
is_anagram = false;
break;
}
}

if (is_anagram)
{
cout << "Anagram";
}
else
{
cout << "Not Anagram";
}

return 0;
}
