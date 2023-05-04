/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 4
*/
#include<fstream>
#include<iostream>
#include<string>

#include"patrons.h"
#include"patron.h"

using namespace std;
	
/*+1 to patroncount*/
void patrons::incPatrons(){
        patCount++;
}

/*Here we are reading formated patron data back into our patronlist vector then closing file
load ifstream
create variables
create patron obj
open txt file
load data
pushback data into vector
close file*/
void patrons::loadPatrons(){

        ifstream fin;
        string name;
        float balance;
        int ID, numItems;
        patron newPat;

        fin.open("patrons.txt");
        fin>>patCount;
        fin.ignore();

        for(int i=0; i<patronList.size();i++){

                getline(fin, name);
                newPat.SetPatName(name);

                fin>>ID;
                newPat.SetPatID(ID);
                fin.ignore();

                fin>>balance;
                newPat.SetPatBalance(balance);
                fin.ignore();
                
                fin>>numItems;
                newPat.SetPatNumItems(numItems);
                fin.ignore();

                patronList.push_back(newPat);

        }

        fin.close();
}

/*Here we are reading formated patron data back into our patron.txt then closing file
load ofstream
open txt file
load data in for loop
fout all data
close file*/
void patrons::storePatrons(){

        ofstream fout;
        fout.open("patrons.txt");
        fout<<patCount<<endl;

        for(int i=0; i<patronList.size(); i++){
                fout<<patronList.at(i).GetPatName()<<endl<<patronList.at(i).GetPatID()<<endl;
                fout<<patronList.at(i).GetPatBalance()<<endl<<patronList.at(i).GetPatNumItems()<<endl;
        }

        fout.close();
}

/*Create variables
Create patron obj
Cout prompt
Getline and cin data
Call inc func
Push back on vector*/
void patrons::addPatron(){

        string name;
        float balance;
        int libID, numBooks;

        patron newPat;

        cout<<"Enter new Patron name: "<<endl;
        getline(cin, name);
        newPat.SetPatName(name);

        newPat.SetPatID(patCount);
        incPatrons();

        patronList.push_back(newPat);

}

/*we are prompting for unique lib id so we can have the list iterator for other funciton use
create variable
ask for name
iterator through list until match
return location*/
int patrons::findPatron(){
        int ID;
        int spot;

        cout<<"Enter Patron's 6 digit Libary ID: ";
        cin>>ID;
        cin.ignore();

        for(int i=0; i<patronList.size();i++){

                if(ID==patronList.at(i).GetPatID()){
                        spot=i;
                }

        }

        return spot;
}

/*erase book instance at location*/
void patrons::deletePatron(int spot){
        patronList.erase(patronList.begin()+spot);
}

/*implementing simple menu so that we can change data for lib staff use
create choice menu
prompt for what change
prompt for new patron info
update relevant book data member*/
void patrons::editPatron(int spot){
        char choice='x';

        while(choice!='r'){
                cout<<"Edit Menu\nn - Name\nr - Return to Book MENU\n";
                string name;

                cin>>choice;
                cin.ignore();

                if(choice=='n'){
                        string name;
                        cout<<"Enter new Name: "<<endl;
                        getline(cin, name);

                        patronList.at(spot).SetPatName(name);
                        printPatron(spot);
                }
        }
}

/*Create for loop of list
At every location print all relevant data members in consistent format*/
void patrons::printAllPatrons(){
        for(int i=0; i<patronList.size(); i++){
                cout<<"Name: "<<patronList.at(i).GetPatName()<<endl;
                cout<<"Libary ID: "<<patronList.at(i).GetPatID()<<endl;
                cout<<"Fine Balance: $"<<patronList.at(i).GetPatBalance()<<endl;
                cout<<"Current Number of items: "<<patronList.at(i).GetPatNumItems()<<"\n\n";
        }
}

/*In main we get our position, here we are using that data to get our formated info
receive vector location, then print all relevant 
data members with info describing what is being shown*/
void patrons::printPatron(int spot){

        cout<<"Name: "<<patronList.at(spot).GetPatName()<<endl;
        cout<<"Libary ID: "<<patronList.at(spot).GetPatID()<<endl;
        cout<<"Fine Balance: $"<<patronList.at(spot).GetPatBalance()<<endl;
        cout<<"Current Number of items: "<<patronList.at(spot).GetPatNumItems()<<"\n\n";
}

/* In main get spot in list
Prompt for payment amount
Store in variable
Use patron member function to update specific instance
Print new balance*/
void patrons::payFine(int spot){
        float amount, newTotal;
        cout<<"Current Total fees: "<<patronList.at(spot).GetPatBalance()<<endl;
        cout<<"How much would you like to pay today?\n";
        cin>>amount;
        cin.ignore();

        newTotal=patronList.at(spot).GetPatBalance()-amount;
        patronList.at(spot).SetPatBalance(newTotal);
        cout<<"New Balance: "<<newTotal;
}

/*In main get spot in list
Create num variable
Use patron member function get pat num books and return using num varible*/
int patrons::getNumItems(int spot){
        int num;
        num=patronList.at(spot).GetPatNumItems();
        return num;
}

/*Receive spot in vector, and return id num,
 useful to get around permission issues */
int patrons::getPatID(int spot){
        int ID;
        ID=patronList.at(spot).GetPatID();
        return ID;
}

/*In main get spot in list
Create balance variable
Use patron member function get pat balance and return using balance variable*/	
float patrons::getPatBalance(int spot){
        float balance;
        balance=patronList.at(spot).GetPatBalance();
        return balance;
}

/*Permission issue function, just uses spot given and book id 
Calls add book func and passes data from main*/
void patrons::addPatItem(int spot, int itemID){
        patronList.at(spot).addItem(itemID);

}
        
/*Permission issue function, just uses spot  
Calls print book func and passes spot data from main*/	
void patrons::ListItems(int spot){
        patronList.at(spot).printItems();
}