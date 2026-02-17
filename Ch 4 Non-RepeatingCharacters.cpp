#include <iostream>
using namespace std;

int main()
{
    char input_text[200];
    cin.getline(input_text, 200);

    char unique_character = '\0';

    for (int temporary_index = 0; input_text[temporary_index] != '\0'; temporary_index++)
    {
        int character_count = 0;

        for (int scan_index = 0; input_text[scan_index] != '\0'; scan_index++)
        {
            if (input_text[temporary_index] == input_text[scan_index])
            {
                character_count++;
            }
        }

        if (character_count == 1)
        {
            unique_character = input_text[temporary_index];
            break;
        }
    }

    if (unique_character == '\0')
    {
        cout << "None\n";
    }
    else
    {
        cout << unique_character << endl;
    }

    return 0;
}
