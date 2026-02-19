#include <iostream>
using namespace std;

int main()
{
char input_sentence[200];
cin.getline(input_sentence, 200);

for (int character_index = 0; input_sentence[character_index] != '\0'; character_index++)
{
if (input_sentence[character_index] == ' ')
{
input_sentence[character_index] = '-';
}
}

cout << input_sentence << endl;

return 0;
}
