/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#include<iostream>
#include<string>
using namespace std;

#include "book.h"

string book::GetBookTitle(){
	return bookTitle;
}

void book::SetBookTitle(string title){
	bookTitle=title;
}

string book::GetBookAuthor(){
	return bookAuthor;
}

void book::SetBookAuthor(string author){
	bookAuthor=author;
}

string book::GetBookISBN(){
	return bookISBN;
}

void book::SetBookISBN(string ISBN){
	bookISBN=ISBN;
}

string book::GetBookCat(){
	return bookCat;
}
		
void book::SetBookCat(string cat){
	bookCat=cat;
}
		
void book::print(){
	cout<<"Title: "<<bookTitle<<endl;
	cout<<"Author: "<<bookAuthor<<endl;
	cout<<"ISBN: "<<bookISBN<<endl;
	cout<<"Category: "<<bookCat<<endl;
	cout<<"Cost: "<<itemCost<<endl;
	cout<<"Status: "<<itemStatus<<endl;
	cout<<"Libary ID: "<<itemID<<endl;
	cout<<"Item Due: "<<itemTime<<"\n\n";
}