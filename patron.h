/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#ifndef PATRON_H
#define PATRON_H

#include<vector>
#include <string>
#include "book.h"

using namespace std;

class patron{
private:
	string patName;
	int patID, patNumItems;
	float patBalance;
	vector<int>patItems;
		
public:
	patron(){
		patName = " ";
		patID = -1;
		patBalance= 0;
		patNumItems=0;
    }

	patron(string name, int ID, float balance){
		patName = name;
		patID = ID;
		patBalance= balance;
		patNumItems=0;
    }

	string GetPatName();
	void SetPatName(string name);

	int GetPatID();
	void SetPatID(int ID);

	float GetPatBalance();
	void SetPatBalance(int balance);

	int GetPatNumItems();
	void SetPatNumItems(int numItems);

	void addItem(int itemID);
	void printItems();
};
#endif