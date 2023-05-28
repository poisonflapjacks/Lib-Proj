#include<iostream>
#include<string>

#include"patron.h"
using namespace std;

string Patron::GetPatName(){
	return pat_name;
}

void Patron::SetPatName(string name){
	pat_name=name;
}

int Patron::GetPatID(){
	return pat_ID;
}

void Patron::SetPatID(int ID){
	pat_ID=ID;
}

float Patron::GetPatBalance(){
	return pat_balance;
}

void Patron::SetPatBalance(int balance){
	pat_balance=balance;
}

int Patron::GetPatNumItems(){
	return pat_num_items;
}

void Patron::SetPatNumItems(int numItems){
	pat_num_items=numItems;
}

void Patron::addItem(int itemID){
	patItems.push_back(itemID);
	pat_num_items++;
}

void Patron::printItems(){
	for (int i=0; i<patItems.size();i++){
		cout<<"Item #"<<i<<"lib id: "<<patItems.at(i)<<endl;
	}
}