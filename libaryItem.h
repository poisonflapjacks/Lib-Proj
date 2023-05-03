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

	int itemID;
	float itemCost;
	string itemStatus;
	int itemTime;

public:

	int GetItemID();
	void SetItemID(int ID);
	
	int GetItemCost();
	void SetItemCost(int cost);
	
	string GetItemStatus();
	void SetItemStatus(int status);

	int GetItemTime();
	void SetItemTime(int time);
	
	void printItem(int spot);

	virtual void print() = 0;

	LibaryItem();
	virtual ~LibaryItem();
};

#endif