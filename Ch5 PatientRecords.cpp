#include <iostream>
using namespace std;

struct Patient
{
int patient_id;
char name[50];
float temperature;
};

int main()
{
Patient patients[5];

for (int index = 0; index < 5; index++)
{
cout << "\nEnter details for Patient " << (index + 1) << endl;

cout << "Patient ID: ";
cin >> patients[index].patient_id;

cin.ignore();

cout << "Patient Name: ";
cin.getline(patients[index].name, 50);

cout << "Body Temperature: ";
cin >> patients[index].temperature;
}

cout << "\n===== Patient Records =====\n";

for (int index = 0; index < 5; index++)
{
cout << "Patient " << (index + 1) << ": ";
cout << "ID = " << patients[index].patient_id << ", ";
cout << "Name = " << patients[index].name << ", ";
cout << "Temperature = " << patients[index].temperature << endl;
}

return 0;
}
