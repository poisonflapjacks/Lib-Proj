/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#ifndef LIBARYITEMS_H
#define LIBARYITEMS_H

#include"libaryItem.h"
#include<string>
#include<vector>

using namespace std;

class LibaryItems{
	private:
        vector<LibaryItem*>itemList;
        int itemCount=100000;

        public:
        void loadItems();
        void storeItems();
        void incItems();
        void addItem();
        int findItem();
        void deleteItem(int spot);
        void editItem(int spot);
        void printAllItems();
        void printItem(int spot);
	int ReturnItemID(int spot);
	 
};
#endif
