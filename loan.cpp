/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/

#include<iostream>
#include<string>

#include"loan.h"

using namespace std;

void loan::SetLoanID(int LOANID){
	loanID=LOANID;
}

int loan::GetLoanID(){
	return loanID;
}

void loan::SetLoanBookID(int bookID){
	loanBookID=bookID;
}

int loan::GetLoanBookID(){
	return loanBookID;
}

void loan::SetLoanBookTitle(string title){
	loanBookTitle=title;
}

string loan::GetLoanBookTitle(){
	return loanBookTitle;
}

void loan::SetLoanPatID(int patID){
	loanPatID=patID;
}

int loan::GetLoanPatID(){
	return loanPatID;
}

void loan::SetLoanDue(time_t checked){
	loanDue=checked;
}

time_t loan::GetLoanDue(){
	return loanDue;
}

void loan::SetLoanStatus(int status){
	loanStatus=status;
}

string loan::GetLoanStatus(){

	string result;
	
	if(loanStatus==0){
		//same here might need to change return type to string for printing
		result="Normal";
	}

	else if (loanStatus==2){
		result="Overdue";
	}

	return result;

}