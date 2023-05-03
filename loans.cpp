/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#include"loans.h"
#include "loan.h"

#include<fstream>
#include<iostream>
#include<string>
#include<ctime>

/*+1 to LoanCount*/
void loans::incLoanCount(){
	loanCount++;
}

	/*Here we are reading formatted book data back into our loanlist vector then closing file
load ifstream
create variables
create loan obj
open txt file
load data
pushback data into vector
close file*/
void loans::loadLoans(){
	ifstream fin;
	int loanID, patID, bookID;
	string status;
	time_t loanDue;
	loan newLoan;
	
	fin.open("loans.txt");
	fin>>loanCount;
	fin.ignore();

	for(int i=0; i<loanList.size(); i++){
		fin>>loanID;
		fin.ignore();
		newLoan.SetLoanID(loanID);

		fin>>loanDue;
		fin.ignore();
		newLoan.SetLoanDue(loanDue);

		fin>>bookID;
					fin.ignore();
					newLoan.SetLoanBookID(bookID);
		
		fin>>patID;
					fin.ignore();
					newLoan.SetLoanPatID(patID);

		getline(fin,status);

		if(status=="Normal"){
			newLoan.SetLoanStatus(0);
		}

		else if(status=="Overdue"){
			newLoan.SetLoanStatus(1);
		}

		loanList.push_back(newLoan);
	}

	fin.close();

}

/*Here we are reading formatted book data back into our loans.txt then closing file
load ofstream
open txt file
load data in for loop
fout all data
close file
*/
void loans::storeLoans(){

	ofstream fout;
	fout.open("loans.txt");
	fout<<loanCount<<endl;

	for(int i=0; i<loanList.size(); i++){
		fout<<loanList.at(i).GetLoanID()<<endl<<loanList.at(i).GetLoanDue()<<endl<<loanList.at(i).GetLoanBookID()<<endl;
		fout<<loanList.at(i).GetLoanPatID()<<endl<<loanList.at(i).GetLoanStatus()<<endl;
	}

	fout.close();
}

/*Create loan obj
Set book and pat data from main
Set default status
Change data in relevant pat and book vectors
Call time func
Call inc func
Push back on vector
*/
void loans::outBook(int bookID, int patID){

	loan newLoan(bookID,patID);
	newLoan.SetLoanID(loanCount);
	incLoanCount();
	time_t due=currTime()+864000;
	newLoan.SetLoanDue(due);
	loanList.push_back(newLoan);

}

/*Get book and pat data from main
Change data in relevant pat and book vectors
Call dec func
Pop spot on vector*/
void loans::inBook(int patSpot, int bookSpot){
	
}

	/*Create time_c variable
Read system clock and store
Return time*/
time_t loans::currTime(){
	time_t now= time(NULL);
	return now;
}
	
	/*Get time_ t variable when called
Convert to local time variable using time struct
Return string*/
string loans::printTime(time_t due){
	string timePrinted;
	
	time(&due);
	timePrinted=asctime(localtime(&due));

	return timePrinted;
}
		
	/*Call current time func
Iterate through all loans and compare their due time to curr time
If the due time is less than curr time print out all details for that loan
*/
void loans::printAllOverdue(){
	time_t now=currTime();

	for(int i=0; i<loanList.size(); i++){

		if(loanList.at(i).GetLoanDue()<currTime()){
			time_t due=loanList.at(i).GetLoanDue();

			cout<<"Loan ID: "<<loanList.at(i).GetLoanID()<<endl;
			cout<<"Book ID: "<<loanList.at(i).GetLoanBookID()<<endl;
			cout<<"Checked out by: "<<loanList.at(i).GetLoanPatID()<<endl;
			cout<<"Was due: "<<printTime(due)<<"\n\n";
		}

	}

}

/*Create variables
Prompt for loan id
Iterate through loan list until match is found
Return location of match
*/
int loans::findLoan(){
	int ID;
	int loanSpot;

	cout<<"Please enter loan ID number: ";
	cin>>ID;
	cin.ignore();

	for(int i=0; loanList.size(); i++){
		if(ID=loanList.at(i).GetLoanID()){
			loanSpot=i;
		}
	}
	return loanSpot;
}

/*Get locations of patron and book spots in lists from main
Pull book value from book obj
Add to patron balance
Change status of book to lost
*/				
void loans::reportLost(int patSpot, int bookSpot){

}