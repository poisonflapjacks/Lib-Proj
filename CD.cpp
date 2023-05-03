/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/

#include <iostream>
#include <string>
using namespace std;

#include "CD.h"

string CD::GetCDTitle(){
	return CDTitle;
}

void CD::SetCDTitle(string title){
	CDTitle=title;
}

string CD::GetCDArtist(){
	return CDArtist;
}

void CD::SetCDArtist(string artist){
	CDArtist=artist;
}

int CD::GetCDNumTracks(){
	return CDNumTracks;
}

void CD::SetCDNumTracks(int num){
	CDNumTracks=num;
}

string CD::GetCDDate(){
	return CDDate;
}

void CD::SetCDDate(string date){
	CDDate=date;
}

string CD::GetCDGenre(){
	return CDGenre;
}

void CD::SetCDGenre(string genre){
	CDGenre=genre;
}
	
void CD::print(){
	cout<<"Title: "<<CDTitle<<endl;
	cout<<"Artist: "<<CDArtist<<endl;
	cout<<"Number of tracks: "<<CDNumTracks<<endl;
	cout<<"Genre: "<<CDGenre<<endl;
	cout<<"Release Date: "<<CDDate<<endl;
	cout<<"Cost: "<<itemCost<<endl;
	cout<<"Status: "<<itemStatus<<endl;
	cout<<"Libary ID: "<<itemID<<endl;
	cout<<"Item Due: "<<itemTime<<"\n\n";
}