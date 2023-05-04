/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/

#include <iostream>
#include <string>
using namespace std;

#include "CD.h"

string CD::GetCDArtist(){
	return CD_artist;
}

void CD::SetCDArtist(string artist){
	CD_artist=artist;
}

int CD::GetCDNumTracks(){
	return CD_num_tracks;
}

void CD::SetCDNumTracks(int num){
	CD_num_tracks=num;
}

string CD::GetCDDate(){
	return CD_date;
}

void CD::SetCDDate(string date){
	CD_date=date;
}

string CD::GetCDGenre(){
	return item_cat;
}

void CD::SetCDGenre(string genre){
	item_cat=genre;
}
	
void CD::print(){
	cout<<"Title: "<<item_name<<endl;
	cout<<"Artist: "<<CD_artist<<endl;
	cout<<"Number of tracks: "<<CD_num_tracks<<endl;
	cout<<"Genre: "<<item_cat<<endl;
	cout<<"Release Date: "<<CD_date<<endl;
	cout<<"Cost: "<<item_cost<<endl;
	cout<<"Status: "<<item_status<<endl;
	cout<<"Libary ID: "<<item_ID<<endl;
	cout<<"Item Due: "<<item_time<<"\n\n";
}