/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#ifndef LOAN_H
#define LOAN_H

#include<string>
#include<ctime>

using namespace std;

class loan{
	private:
	int loanID;
	int loanBookID;
	string loanBookTitle;
	string loanPatName;
	int loanPatID;
	int loanDue;
	int loanStatus;

	public:
	loan(){
        	loanID=0;
                loanBookID=0;
		loanBookTitle=" ";
                loanPatID=0;
                loanDue=0;
                loanStatus=0;
        }

        loan(int bookID, int patID){
		loanBookID=bookID;
                loanPatID=patID;
		loanStatus=0;
       }

	void SetLoanID(int LOANID);
	int GetLoanID();

	void SetLoanBookID(int bookID);
	int GetLoanBookID();

	void SetLoanBookTitle(string title);
	string GetLoanBookTitle();

	void SetLoanPatID(int patID);
	int GetLoanPatID();

	void SetLoanDue(time_t checked);
	time_t GetLoanDue();

	void SetLoanStatus(int status);
	string GetLoanStatus();

};

#endif

