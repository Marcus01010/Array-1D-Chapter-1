#include <iostream>
using namespace std;

int main()
{
char input_text[200];
cin.getline(input_text, 200);

char first_unique_character = '\0';

for (int current_index = 0; input_text[current_index] != '\0'; current_index++)
{
int character_count = 0;

for (int scan_index = 0; input_text[scan_index] != '\0'; scan_index++)
{
if (input_text[current_index] == input_text[scan_index])
{
character_count++;
}
}

if (character_count == 1)
{
first_unique_character = input_text[current_index];
break;
}
}

if (first_unique_character == '\0')
{
cout << "None" << endl;
}
else
{
cout << first_unique_character << endl;
}

return 0;
}
