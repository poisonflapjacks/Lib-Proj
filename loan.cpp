/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/

#include<iostream>
#include<string>

#include"loan.h"

using namespace std;

void loan::SetLoanID(int LOANID){
	loan_ID=LOANID;
}

int loan::GetLoanID(){
	return loan_ID;
}

void loan::SetLoanBookID(int item_ID){
	loan_item_ID=item_ID;
}

int loan::GetLoanBookID(){
	return loan_item_ID;
}

void loan::SetLoanItemName(string name){
	loan_item_name=name;
}

string loan::GetLoanItemName(){
	return loan_item_name;
}

void loan::SetLoanPatID(int patID){
	loan_pat_ID=patID;
}

int loan::GetLoanPatID(){
	return loan_pat_ID;
}

void loan::SetLoanDue(time_t checked){
	loan_due=checked;
}

time_t loan::GetLoanDue(){
	return loan_due;
}

void loan::SetLoanStatus(int status){
	loan_status=status;
}

string loan::GetLoanStatus(){

	string result;
	
	if(loan_status==0){
		//same here might need to change return type to string for printing
		result="Normal";
	}

	else if (loan_status==1){
		result="Overdue";
	}

	return result;

}