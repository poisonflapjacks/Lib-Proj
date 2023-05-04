#include<iostream>
#include<string>

#include "libaryItem.h"
using namespace std;

int LibaryItem::GetItemID(){
	return item_ID;
}

void LibaryItem::SetItemID(int ID){
	item_ID=ID;
}

int LibaryItem::GetItemCost(){
	return item_cost;
}

void LibaryItem::SetItemCost(int cost){
	item_cost=cost;
}

string LibaryItem::GetItemStatus(){
	return item_status;
}

void LibaryItem::SetItemStatus(int status){

	if(status==0){
		item_status ="In";
	}

	else if(status==1){
		item_status = "Out";
	}

	else if(status==2){
		item_status = "Lost";
	}

}

int LibaryItem::GetItemTime(){
	return item_time;
}

void LibaryItem::SetItemTime(int time){
	item_time= time;
}
	
string LibaryItem::GetItemName(){
	return item_name;
}

void LibaryItem::SetItemName(string name){
	item_name = name;
}

string LibaryItem::GetItemCat(){
	return item_cat;
}

void LibaryItem::SetItemCat(string cat){
	item_cat = cat;
}