#include <iostream>
using namespace std;

int main()
{
    cout << "Enter some random things and I will reverse the order in which they are.\n";

    char text[50];
    cin.getline(text, 50);

    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    int left_index = 0;
    int right_index = length - 1;

    while (left_index < right_index)
    {
        char temp = text[left_index];
        text[left_index] = text[right_index];
        text[right_index] = temp;

        left_index++;
        right_index--;
    }

    cout << text << endl;

    return 0;
}
