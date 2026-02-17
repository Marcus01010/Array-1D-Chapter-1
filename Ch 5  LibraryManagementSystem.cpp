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
	Book first_book;

	first_book.book_id = 1;
	first_book.price = 15.00;

	cout << "Book number: " << first_book.book_id << endl;
	cout << "Price: $" << first_book.price << endl;

	return 0;
}
