/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/

#include <iostream>
#include <string>
using namespace std;

#include "DVD.h"

int DVD::GetDVDTime(){
	return DVD_runtime;
}

void DVD::SetDVDTime(int num){
	DVD_runtime=num;
}

string DVD::GetDVDStudio(){
	return DVD_studio;
}

void DVD::SetDVDStudio(string studio){
	DVD_studio=studio;
}

string DVD::GetDVDReleaseDate(){
	return DVD_release_date;
}

void DVD::SetDVDReleaseDate(string date){
	DVD_release_date=date;
}

void DVD::print(){
	cout<<"Title: "<<item_name<<endl;
	cout<<"Studio: "<<DVD_studio<<endl;
	cout<<"Run time: "<<DVD_runtime<<endl;
	cout<<"Category: "<<item_cat<<endl;
	cout<<"Release Date: "<<DVD_release_date<<endl;
	cout<<"Cost: "<<item_cost<<endl;
	cout<<"Status: "<<item_status<<endl;
	cout<<"Libary ID: "<<item_ID<<endl;
	cout<<"Item Due: "<<item_time<<"\n\n";
}