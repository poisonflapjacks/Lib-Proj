#include<fstream>
#include<iostream>
#include<string>

#include"patrons.h"
#include"patron.h"

using namespace std;

void Patrons::incPatrons(){
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
void Patrons::loadPatrons(){

        ifstream fin;
        string name;
        float balance;
        int ID, numItems;
        Patron newPat;

        fin.open("patrons.txt");
        fin>>patCount;
        fin.ignore();

        for(int i=0; i<patronList.size(); i++){

                getline(fin, name);

                fin>>ID;
                fin.ignore();

                fin>>balance;
                fin.ignore();

                fin>>numItems;
                fin.ignore();

                Patron* temp = new Patron(name, ID, balance, numItems); 
                patronList.push_back(temp);

        }

        fin.close();
}

/*Here we are reading formated patron data 
back into our patron.txt then closing file*/
void Patrons::storePatrons(){

        ofstream fout;
        fout.open("patrons.txt");
        fout<<patCount<<endl;

        for(int i=0; i<patronList.size(); i++){
                fout<<patronList.at(i)->GetPatName()<<endl<<patronList.at(i)->GetPatID()<<endl;
                fout<<patronList.at(i)->GetPatBalance()<<endl<<patronList.at(i)->GetPatNumItems()<<endl;
        }

        fout.close();
}

/*Create variables
Create patron obj
Cout prompt
Getline and cin data
Call inc func
Push back on vector*/
void Patrons::addPatron(){

        string name;
        float balance;
        int libID, numBooks;

        Patron* newPat = new Patron;

        cout<<"Enter new Patron name: "<<endl;
        getline(cin, name);
        newPat->SetPatName(name);

        newPat->SetPatID(patCount);
        incPatrons();
        patronList.push_back(newPat);
}

/*we are prompting for unique lib id so we can have the list iterator for other funciton use
create variable
ask for name
iterator through list until match
return location*/
int Patrons::findPatron(){
        int ID;
        int spot;

        cout<<"Enter Patron's 6 digit Libary ID: ";
        cin>>ID;
        cin.ignore();

        for(int i=0; i<patronList.size();i++){

                if(ID==patronList.at(i)->GetPatID()){
                        spot=i;
                }

        }

        return spot;
}

/*erase book instance at location*/
void Patrons::deletePatron(int spot){
        patronList.erase(patronList.begin()+spot);
}

/*implementing simple menu so that we can change data for lib staff use
create choice menu
prompt for what change
prompt for new patron info
update relevant book data member*/
void Patrons::editPatron(int spot){
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

                        patronList.at(spot)->SetPatName(name);
                        printPatron(spot);
                }
        }
}

/*Create for loop of list
At every location print all relevant data members in consistent format*/
void Patrons::printAllPatrons(){
        for(int i=0; i<patronList.size(); i++){
                cout<<"Name: "<<patronList.at(i)->GetPatName()<<endl;
                cout<<"Libary ID: "<<patronList.at(i)->GetPatID()<<endl;
                cout<<"Fine Balance: $"<<patronList.at(i)->GetPatBalance()<<endl;
                cout<<"Current Number of items: "<<patronList.at(i)->GetPatNumItems()<<"\n\n";
        }
}

/*In main we get our position, here we are using that data to get our formated info
receive vector location, then print all relevant 
data members with info describing what is being shown*/
void Patrons::printPatron(int spot){

        cout<<"Name: "<<patronList.at(spot)->GetPatName()<<endl;
        cout<<"Libary ID: "<<patronList.at(spot)->GetPatID()<<endl;
        cout<<"Fine Balance: $"<<patronList.at(spot)->GetPatBalance()<<endl;
        cout<<"Current Number of items: "<<patronList.at(spot)->GetPatNumItems()<<"\n\n";
}

/* In main get spot in list
Prompt for payment amount
Store in variable
Use patron member function to update specific instance
Print new balance*/
void Patrons::payFine(int spot){
        float amount, newTotal;
        cout<<"Current Total fees: "<<patronList.at(spot)->GetPatBalance()<<endl;
        cout<<"How much would you like to pay today?\n";
        cin>>amount;
        cin.ignore();

        newTotal=patronList.at(spot)->GetPatBalance()-amount;
        patronList.at(spot)->SetPatBalance(newTotal);
        cout<<"New Balance: "<<newTotal;
}

/*In main get spot in list
Create num variable
Use patron member function get pat num books and return using num varible*/
int Patrons::getNumItems(int spot){
        int num;
        num=patronList.at(spot)->GetPatNumItems();
        return num;
}

/*Receive spot in vector, and return id num,
 useful to get around permission issues */
int Patrons::getPatID(int spot){
        int ID;
        ID=patronList.at(spot)->GetPatID();
        return ID;
}

/*In main get spot in list
Create balance variable
Use patron member function get pat balance and return using balance variable*/	
float Patrons::getPatBalance(int spot){
        float balance;
        balance=patronList.at(spot)->GetPatBalance();
        return balance;
}

/*Permission issue function, just uses spot given and book id 
Calls add book func and passes data from main*/
void Patrons::addPatItem(int spot, int itemID){
        patronList.at(spot)->addItem(itemID);

}
        
/*Permission issue function, just uses spot  
Calls print book func and passes spot data from main*/	
void Patrons::ListItems(int spot){
        patronList.at(spot)->printItems();
}