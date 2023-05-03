/* Name: Micheal Chapa
   Course: CSCE 1040	
   Asssignment: Hwk 3
*/
#include<iostream>
#include<vector>
#include<string>
#include<time.h>

#include"patrons.h"
#include"patron.h"
#include"loans.h"
#include"loan.h"
#include"libaryItems.h"
#include"libaryItem.h"
#include"book.h"
#include"CD.h"
#include"DVD.h"

using namespace std;
int main(){

	string name;
	char choice='x', choice1='x', choice2='x', choice3='x';
	float amount;
	int userNum;
	
	LibaryItems libInv;
	patrons libPats;
	loans libTrans;

	//libInv.loadItems();
	libPats.loadPatrons();
	libTrans.loadLoans();

	while(choice!='q'){
		cout<<"Libary MENU\ni - Items\np - Patrons\nl - Loans\nq - Quit\n";
		cin>>choice;
		cout<<endl;

		if(choice=='p'){
			cout<<"Patron MENU\na - Add Patron\ne - Edit Patron\nd - delete Patron\n";
			cout<<"f - find Patron\np - Print All Patrons\nm - Pay Patron Fee\n";
			cout<<"r - Return to Libary MENU\n";

			cin>>choice1;
			cin.ignore();
			cout<<endl;
			

			if(choice1=='a'){
				cout<<"Adding patron\n";
				libPats.addPatron();
			}

			else if(choice1=='e'){
				int spot;
				cout<<"Editing patron\n";
				spot=libPats.findPatron();
				libPats.printPatron(spot);
				libPats.editPatron(spot);
			}

			else if(choice1=='f'){
				int spot;
				cout<<"Finding patron\n";
				spot=libPats.findPatron();
				libPats.printPatron(spot);
			}
			
			else if(choice1=='d'){
				int spot;
				cout<<"Deleting patron\n";
				spot=libPats.findPatron();
				libPats.deletePatron(spot);
			}

			else if(choice1=='p'){
				cout<<"List of all patrons:\n";
				libPats.printAllPatrons();
			}
			else if(choice=='m'){
				int spot;
				cout<<"Paying Fine\n";
				spot=libPats.findPatron();
				libPats.payFine(spot);
			}
	}

		else if (choice=='i'){

			cout<<"Item MENU\na - Add Item\ne - Edit Item\nd - delete item\n";
			cout<<"f - find item\np - Print All Items\nr - Return to Libary MENU\n";

			cin>>choice2;
			cin.ignore();
			cout<<endl;

			if(choice2=='a'){
				cout<<"Adding Item\n";
				libInv.addItem();
			}

			else if(choice2=='e'){
				int spot;
				cout<<"Editing Item\n";
				spot=libInv.findItem();
				libInv.printItem(spot);
				libInv.editItem(spot);
			}

			else if(choice2=='d'){
				int spot;
				cout<<"Deleting item\n";
				spot=libInv.findItem();
				libInv.deleteItem(spot);
			}
			
			else if(choice2=='f'){
				int spot;
				cout<<"Print single item\n";
				spot=libInv.findItem();
				libInv.printItem(spot);
			}
			else if(choice2=='p'){
				cout<<"List of all items:\n";
				libInv.printAllItems();
			}
		}

		else if (choice=='l'){
			cout<<"Loans MENU\no - Check Out Item\ni - Check In Item\nl - Lost Item\n";
			cout<<"p - Print all Over Due Items\nb Print all Items checked out for Patron\n";

			cin>>choice3;
			cin.ignore();
			cout<<endl;

			if(choice3=='o'){
				
				int patID, itemID, patNum;
				int patSpot, itemSpot;
				float patBalance;

				cout<<"CHECK OUT ITEMS\n";
				patSpot=libPats.findPatron();

				patNum=libPats.getNumItems(patSpot);
				patBalance=libPats.getPatBalance(patSpot);
				patID=libPats.getPatID(patSpot);

				if(patNum>6){

					if(patBalance==0){
						
						itemSpot=libInv.findItem();
						itemID=libInv.ReturnItemID(itemSpot);
						libTrans.outBook(itemID, patID);

						libPats.addPatItem(patSpot, itemID);
					}

					else{
						cout<<"Fees Due: "<<patBalance<<endl;
					}
				}

				else{
					cout<<"Max number of checked out items reached\n";
				}
				
			}
			
			else if(choice3=='i'){
				cout<<"CHECK IN ITEM\n";
				libInv.findItem();
			}

			else if(choice3=='l'){
				cout<<"LOST ITEM\n";
				int spot=libInv.findItem();
			}

			else if(choice3=='p'){
				cout<<"ALL OVER DUE\n";
				libTrans.printAllOverdue();
			}

			else if(choice3=='b'){
				cout<<"ITEM LIST FOR PATRON\n";
				int patSpot=libPats.findPatron();
				libPats.ListItems(patSpot);
			}

		}
		
	}

	//libInv.storeItems();
	libPats.storePatrons();
	libTrans.storeLoans();

	return 0;
}