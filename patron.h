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
	string pat_name;
	int pat_ID, pat_num_items;
	float pat_balance;
	vector<int>patItems;
		
public:
	patron(){
		pat_name = " ";
		pat_ID = -1;
		pat_balance= 0;
		pat_num_items=0;
    }

	patron(string name, int ID, float balance){
		pat_name = name;
		pat_ID = ID;
		pat_balance = balance;
		pat_num_items = 0;
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