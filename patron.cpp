/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/

#include<iostream>
#include<string>

#include"patron.h"
using namespace std;

string patron::GetPatName(){
	return patName;
}

void patron::SetPatName(string name){
	patName=name;
}

int patron::GetPatID(){
	return patID;
}

void patron::SetPatID(int ID){
	patID=ID;
}

float patron::GetPatBalance(){
	return patBalance;
}

void patron::SetPatBalance(int balance){
	patBalance=balance;
}

int patron::GetPatNumItems(){
	return patNumItems;
}

void patron::SetPatNumItems(int numItems){
	patNumItems=numItems;
}

void patron::addItem(int itemID){
	patItems.push_back(itemID);
	patNumItems++;
}

void patron::printItems(){
	for (int i=0; i<patItems.size();i++){
		cout<<"Item #"<<i<<"lib id: "<<patItems.at(i)<<endl;
	}
}