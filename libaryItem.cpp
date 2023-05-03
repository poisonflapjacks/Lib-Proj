/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3*/
#include<iostream>
#include<string>

#include "libaryItem.h"
using namespace std;

int LibaryItem::GetItemID(){
	return itemID;
}

void LibaryItem::SetItemID(int ID){
	itemID=ID;
}

int LibaryItem::GetItemCost(){
	return itemCost;
}

void LibaryItem::SetItemCost(int cost){
	itemCost=cost;
}

string LibaryItem::GetItemStatus(){
	return itemStatus;
}

void LibaryItem::SetItemStatus(int status){

	if(status==0){
		itemStatus="In";
	}

	else if(status==1){
		itemStatus ="In";
	}

	else if(status=2){
		itemStatus ="Lost";
	}

}

int LibaryItem::GetItemTime(){
	return itemTime;
}

void LibaryItem::SetItemTime(int time){
	itemTime= time;
}
	
LibaryItem::LibaryItem(){ }
LibaryItem::~LibaryItem(){ }