#include <iostream>
using namespace std;

int main()
{
char word[100];
cin >> word;

int length = 0;
while (word[length] != '\0')
{
length++;
}

int left_index = 0;
int right_index = length - 1;

bool is_palindrome = true;

while (left_index < right_index)
{
if (word[left_index] != word[right_index])
{
is_palindrome = false;
break;
}
left_index++;
right_index--;
}

if (is_palindrome)
{
cout << "Palindrome" << endl;
}
else
{
cout << "Not Palindrome" << endl;
}

return 0;
}
