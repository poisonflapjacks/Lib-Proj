/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#include<fstream>
#include<iostream>
#include<string>

#include"libaryItems.h"
#include"libaryItem.h"
#include"book.h"
#include"CD.h"
#include"DVD.h"

using namespace std;

/*Here we are reading formatted loan data back into our book vector then closing file
load ifstream
create variables
create item pointer
open txt file
load data
pushback data into vector
close file*/

void LibaryItems::loadItems(){
	/*Store item
		Here we are reading formatted item data back into our book.txt then closing file
		load ofstream
		open txt file
		load data in for loop
		fout all data with each entry having an identifier in front of its data for formatting, "b" for book, "c"                for CD, "d" for DVD
		close file*/
}

void LibaryItems::storeItems(){
	/*ofstream fout;
	fout.open("items.dat");
	fout << itemCount << endl;
	
	item *temp;
	for(){
		temp=*it;
		fout << temp->getid() << " " <<  temp->getprice() << endl;
	}
	fout.close();*/
}

/*increase item count for lib id*/
void LibaryItems::incItems(){
	itemCount++;
}

/*Create variables
Create item pointer
Cout prompt for type of item to create
Getline and cin data
Set default status
Call inc func
Set item pointer to address of specific obj
Push back on vector
*/
void LibaryItems::addItem(){
	
	cout<<"What type of Item are you adding?\nb - Book\nc - CD\nd - DVD\n";
	char choiceI='x';
	cin>>choiceI;
	cin.ignore();
	
	if(choiceI=='b'){

		string title, author, ISBN, cat;
		float cost;

		cout<<"Please Enter Book Title:\n";
		getline(cin, title);

		cout<<"Please Enter Book Author:\n";
		getline(cin, author);

		cout<<"Please Enter Book ISBN:\n";
		getline(cin, ISBN);

		cout<<"Please Enter Book Cost:\n";
		cin>>cost;
		cin.ignore();

		cout<<"Please Enter Book Category:\n";
		getline(cin, cat);
		
		book* temp= new book(cost, title, author, ISBN, cat);
	}

	else if(choiceI =='c'){

		string title, artist, release, genre;
		float cost;
		int tracks;

		cout<<"Please Enter CD Title:\n";
		getline(cin, title);

		cout<<"Please Enter CD Artist:\n";
		getline(cin, artist);

		cout<<"Please Enter CD release date:\n";
		getline(cin, release);

		cout<<"Please Enter CD Cost:\n";
		cin>>cost;
		cin.ignore();

		cout<<"Please Enter CD Genre:\n";
		getline(cin, genre);

		cout<<"Please Enter CD number of tracks:\n";
		cin>>tracks;
		cin.ignore();

		CD* temp= new CD(cost, title, artist, tracks, release, genre);
	}

	else if(choiceI=='d'){
		
		string title, studio, release, cat;
		float cost;
		int runtime;

		cout<<"Please Enter DVD Title:\n";
		getline(cin, title);

		cout<<"Please Enter DVD Studio:\n";
		getline(cin, studio);

		cout<<"Please Enter DVD Release Date:\n";
		getline(cin, release);

		cout<<"Please Enter DVD Cost:\n";
		cin>>cost;
		cin.ignore();

		cout<<"Please Enter DVD Category:\n";
		getline(cin, cat);

		cout<<"Please Enter DVD runtime in minutes:\n";
		cin>>runtime;
		cin.ignore();

		DVD* temp = new DVD(cost, title, studio, release, cat, runtime);
	
		temp->SetItemID(itemCount);
		incItems();

		itemList.push_back(temp);
	}
}

/*we are prompting for unique library id so we can have the list iterator for other function use
create variable
ask for lib id
iterator through list until match
return location*/
int LibaryItems::findItem(){
	int ID;
	int spot;

	cout<<"Enter Libary Item's 6 digit ID:\n";
	cin>>ID;
	cin.ignore();

	for(int i=0; i<itemList.size(); i++){

		if(ID==itemList.at(i)->GetItemID()){
				spot=i;
		}

	}
	return spot;
}

/*erase book instance at location where lib id matches*/
void LibaryItems::deleteItem(int spot){
	itemList.erase(itemList.begin()+spot);
}

/*implementing simple menu so that we can change data for lib staff use
create choice menu
prompt for what change
prompt for item info
update relevant item data member
*/
void LibaryItems::editItem(int spot){
	float price;
	cout<<"Enter new price"<<endl;
	cin>>price;
	cin.ignore();

	itemList.at(spot)->SetItemCost(price);

	printItem(spot);
}

/*Create for loop of list
At every location print all relevant data members by calling virtual print function so formatting is correct for each type of obj
*/
void LibaryItems::printAllItems(){

	for(int i=0; i<itemList.size(); i++){
		itemList.at(i)->print();
	}

}

/*in main we get our position, here we are using that data to get our formatted info
receive vector location, then print all relevant data members with info describing what is being shown
*/
void LibaryItems::printItem(int spot){
	itemList.at(spot)->print();
}

/*Receive spot in vector, and return id num,
useful to get around permission issues 
*/
int LibaryItems::ReturnItemID(int spot){
	int ID=itemList.at(spot)->GetItemID();
	return ID;
}