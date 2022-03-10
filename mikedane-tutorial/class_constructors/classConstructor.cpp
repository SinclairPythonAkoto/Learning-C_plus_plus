#include <iostream>

using namespace std;


class Book{
	public:
		string title;
		string author;
		int pages;

		Book(){
			title = "no title";
			author = "no author";
			pages = 0;
		}

		Book(string title, string author, int pages){
			this->title = title;
			this->author = author;
			this->pages = pages;
		}
};

int main(){

	Book book1("Harry Potter", "JK Rowling", 500);
	cout << book1.title << endl;

	Book book2("Lord of the Rings", "JRR Tolkien", 300);
	cout << book2.title << endl;

	// using a 2nd constructor
	Book book3;

	cout << book3.title << endl;
	cout << book1.title << " has " << book1.pages << " pages, and was written by " << book1.author << endl;

	return 0;
}
