/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#ifndef PATRONS_H
#define PATRONS_H

#include"patron.h"
#include<string>
#include<vector>

using namespace std;

class patrons{
private:
	vector<patron>patronList;
	int patCount=100000;

public:
	void loadPatrons();
	void storePatrons();
	void incPatrons();
	void addPatron();
	int findPatron();
	void deletePatron(int spot);
	void editPatron(int spot);
	void printAllPatrons();
	void printPatron(int spot);
	void payFine(int spot);
	int getNumItems(int spot);
	float getPatBalance(int spot);
	int getPatID(int spot);
	void addPatItem(int spot, int itemID);
	void getPatItemList();
	void ListItems(int spot);
};
#endif