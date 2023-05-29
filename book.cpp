#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

#include "book.h"

string book::GetBookAuthor(){
	return book_author;
}

void book::SetBookAuthor(string author){
	book_author=author;
}

string book::GetBookISBN(){
	return book_ISBN;
}

void book::SetBookISBN(string ISBN){
	book_ISBN=ISBN;
}
	
void book::print(){
	cout<<"Title: "<<item_name<<endl;
	cout<<"Author: "<<book_author<<endl;
	cout<<"ISBN: "<<book_ISBN<<endl;
	cout<<"Category: "<<item_cat<<endl;
	cout<<"Cost: "<<fixed<<setprecision(2)<<item_cost<<endl;
	cout<<"Status: "<<item_status<<endl;
	cout<<"Libary ID: "<<item_ID<<endl;
	cout<<"Item Due: "<<item_time<<"\n\n";
}