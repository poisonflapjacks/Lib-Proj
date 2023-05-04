#ifndef BOOK_H
#define BOOK_H

#include<string>
#include "libaryItem.h"

class book: public LibaryItem{
private:
	string book_author;
	string book_ISBN;

public:

	string GetBookAuthor();
	void SetBookAuthor(string author);

	string GetBookISBN();
	void SetBookISBN(string ISBN);

	void print() override;
	
	book(int cost, string title, string author, string ISBN, string cat):LibaryItem(){
		item_name=title;
		book_author=author;
		book_ISBN=ISBN;
		item_cat=cat;
		item_cost=cost;
		item_status="In";
	}

};
#endif