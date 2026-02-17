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
        cout << "This is a Palindrome.\n";
    }
    else
    {
        cout << "You must have done something wrong, but this is definitely not a Palindrome.\n";
    }

    return 0;
}
