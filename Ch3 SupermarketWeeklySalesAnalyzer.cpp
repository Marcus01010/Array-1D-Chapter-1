#include <iostream>
using namespace std;

int main()
{
const int ITEMS = 5;
const int COLS = 2;
int cart[ITEMS][COLS];

cout << "Enter price and quantity for 5 items:\n";

for (int row = 0; row < ITEMS; row++)
{
cout << "Item " << (row + 1) << " price: ";
cin >> cart[row][0];

cout << "Item " << (row + 1) << " quantity: ";
cin >> cart[row][1];
}

cout << "\nItem\tPrice\tQty\tSubtotal\n";

int total = 0;

for (int row = 0; row < ITEMS; row++)
{
int price = cart[row][0];
int qty = cart[row][1];
int subtotal = price * qty;

cout << (row + 1) << "\t" << price << "\t" << qty << "\t" << subtotal << endl;

total += subtotal;
}

cout << "------------------------------\n";
cout << "Total:\t\t\t" << total << endl;

return 0;
}
