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
	int loan_ID;
	int loan_item_ID;
	int loan_pat_ID;
	int loan_due;
	int loan_status;
	string loan_item_name;
	string loan_pat_name;

public:
	loan(){
		loan_ID=0;
		loan_item_ID=0;
		loan_item_name=" ";
		loan_pat_ID=0;
		loan_due=0;
		loan_status=0;
    }

    loan(int item_ID, int patID){
		loan_item_ID=item_ID;
        loan_pat_ID=patID;
		loan_status=0;
    }

	void SetLoanID(int LOANID);
	int GetLoanID();

	void SetLoanBookID(int bookID);
	int GetLoanBookID();

	void SetLoanItemName(string name);
	string GetLoanItemName();

	void SetLoanPatID(int patID);
	int GetLoanPatID();

	void SetLoanDue(time_t checked);
	time_t GetLoanDue();

	void SetLoanStatus(int status);
	string GetLoanStatus();

};
#endif