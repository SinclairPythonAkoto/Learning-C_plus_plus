#include <iostream>

using namespace std;

class Book{
	public:
		string title;
		string author;
		int numPages;
};

int main(){

	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.numPages = 500;

	cout << book1.title << endl;

	Book book2;
	book2.title = "Lord of the Rings";
	book2.author = "JRR Tolkien";
	book2.numPages = 300;

	cout << book2.title << endl;
	cout << book1.title << " has " << book1.numPages << " pages, and was written by " << book1.author << endl;

	return 0;
}
