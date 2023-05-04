/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/

#include<iostream>
#include<string>

#include"patron.h"
using namespace std;

string patron::GetPatName(){
	return pat_name;
}

void patron::SetPatName(string name){
	pat_name=name;
}

int patron::GetPatID(){
	return pat_ID;
}

void patron::SetPatID(int ID){
	pat_ID=ID;
}

float patron::GetPatBalance(){
	return pat_balance;
}

void patron::SetPatBalance(int balance){
	pat_balance=balance;
}

int patron::GetPatNumItems(){
	return pat_num_items;
}

void patron::SetPatNumItems(int numItems){
	pat_num_items=numItems;
}

void patron::addItem(int itemID){
	patItems.push_back(itemID);
	pat_num_items++;
}

void patron::printItems(){
	for (int i=0; i<patItems.size();i++){
		cout<<"Item #"<<i<<"lib id: "<<patItems.at(i)<<endl;
	}
}