#include <iostream>
using namespace std;

int main()
{
    char text[200];
    char result[200];
    int index = 0;

    cout << "Enter a sentence and I will give you all the unique characters.\n";
    cin.getline(text, 200);

    for (int temporary_index = 0; text[temporary_index] != '\0'; temporary_index++)
    {
        bool already_present = false;

        for (int check_index = 0; check_index < index; check_index++)
        {
            if (text[temporary_index] == result[check_index])
            {
                already_present = true;
                break;
            }
        }

        if (!already_present)
        {
            result[index] = text[temporary_index];
            index++;
        }
    }

    result[index] = '\0';

    cout << result << endl;

    return 0;
}
