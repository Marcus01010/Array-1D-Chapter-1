#include <iostream>
using namespace std;

int main()
{
char input_text[200];
char unique_characters[200];

cin.getline(input_text, 200);

int unique_index = 0;

for (int input_index = 0; input_text[input_index] != '\0'; input_index++)
{
bool is_already_present = false;

for (int check_index = 0; check_index < unique_index; check_index++)
{
if (input_text[input_index] == unique_characters[check_index])
{
is_already_present = true;
break;
}
}

if (!is_already_present)
{
unique_characters[unique_index] = input_text[input_index];
unique_index++;
}
}

unique_characters[unique_index] = '\0';

cout << unique_characters << endl;

return 0;
}
