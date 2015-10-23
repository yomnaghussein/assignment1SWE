//question 1
in bankaccount.h
#ifndef bankaccount
#define bankaccount
#include <string>
class bankaccount {
private: 
	string holdername;
	string accountid;
	double balance;
public:
	void withdraw(double b);
	void deposite(double d);
	bankaccount();
	bankaccount(double balance,string name);
}

#endif

//in bankaccount.cpp file we will write:
#include "bankaccount.h"
void bankaccount::deposite(double amount)
{
	if (amount<=0)
	{
		//error
	}
}else {
	balance +=d;
}