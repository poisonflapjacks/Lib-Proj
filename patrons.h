#ifndef PATRONS_H
#define PATRONS_H

#include"patron.h"
#include<string>
#include<vector>

using namespace std;

class Patrons{
private:
	vector<Patron*>patronList;
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
	void ListItems(int spot);
};
#endif