/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#ifndef LIBARYITEM_H
#define LIBARYITEM_H

#include<string>
#include<vector>

using namespace std;

class LibaryItem{
protected:

	int item_ID;
	float item_cost;
	string item_status;
	int item_time;
	string item_name;

public:

	
	int GetItemID();
	void SetItemID(int ID);
	
	int GetItemCost();
	void SetItemCost(int cost);
	
	string GetItemStatus();
	void SetItemStatus(int status);

	int GetItemTime();
	void SetItemTime(int time);

	string GetItemName();
	void SetItemName(string name);
	
	void printItem(int spot);

	virtual void print() = 0;
};

#endif