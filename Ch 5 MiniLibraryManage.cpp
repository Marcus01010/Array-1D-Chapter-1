#include <iostream>
using namespace std;

struct Book
{
int book_id;
char title[50];
float price;
};

int main()
{
Book book1;

cout << "Enter Book ID: ";
cin >> book1.book_id;

cin.ignore();

cout << "Enter Book Title: ";
cin.getline(book1.title, 50);

cout << "Enter Book Price: ";
cin >> book1.price;

cout << "\n--- Book Details ---\n";
cout << "Book ID: " << book1.book_id << endl;
cout << "Title: " << book1.title << endl;
cout << "Price: " << book1.price << endl;

return 0;
}
