/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4*/
#ifndef BOOK_H
#define BOOK_H

#include<string>
#include "libaryItem.h"

class book: public LibaryItem{
private:

	string bookTitle;
	string bookAuthor;
	string bookISBN;
	string bookCat;

public:
	string GetBookTitle();
	void SetBookTitle(string title);

	string GetBookAuthor();
	void SetBookAuthor(string author);

	string GetBookISBN();
	void SetBookISBN(string ISBN);

	string GetBookCat();
	void SetBookCat(string cat);

	void print();
	
	book(int cost, string title, string author, string ISBN, string cat):LibaryItem(){
		bookTitle=title;
		bookAuthor=author;
		bookISBN=ISBN;
		bookCat=cat;
		itemCost=cost;
		itemStatus="In";
	}

};

#endif