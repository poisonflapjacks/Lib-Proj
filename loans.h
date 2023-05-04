/* Name: Micheal Chapa
   Course: CSCE 1040
   Asssignment: Hwk 3
*/
#include"loan.h"
#include<string>
#include<vector>

using namespace std;

class loans{
private:
	vector<loan>loanList;
	int loanCount=100000;

public:
	void incLoanCount();
	void loadLoans();
	void storeLoans();
	void outBook( int bookID, int patID);
	void inBook(int bookID, int patID);
	time_t currTime();
	string printTime(time_t due);
	void listPatBooks(int patSpot);
	void printAllOverdue();
	int findLoan();
	void reportLost(int patSpot, int bookSpot);
};
