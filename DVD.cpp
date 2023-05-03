/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/

#include <iostream>
#include <string>
using namespace std;

#include "DVD.h"

string DVD::GetDVDTitle(){
	return DVDTitle;
}

void DVD::SetDVDTitle(string title){
	DVDTitle=title;
}

string DVD::GetDVDCat(){
	return DVDCat;
}

void DVD::SetDVDCat(string cat){
	DVDCat=cat;
}

int DVD::GetDVDTime(){
	return DVDTime;
}

void DVD::SetDVDTime(int num){
	DVDTime=num;
}

string DVD::GetDVDStudio(){
	return DVDStudio;
}

void DVD::SetDVDStudio(string studio){
	DVDStudio=studio;
}

string DVD::GetDVDDate(){
	return DVDDate;
}

void DVD::SetDVDDate(string date){
	DVDDate=date;
}

void DVD::print(){
	cout<<"Title: "<<DVDTitle<<endl;
	cout<<"Studio: "<<DVDStudio<<endl;
	cout<<"Run time: "<<DVDTime<<endl;
	cout<<"Category: "<<DVDCat<<endl;
	cout<<"Release Date: "<<DVDDate<<endl;
	cout<<"Cost: "<<itemCost<<endl;
	cout<<"Status: "<<itemStatus<<endl;
	cout<<"Libary ID: "<<itemID<<endl;
	cout<<"Item Due: "<<itemTime<<"\n\n";
}