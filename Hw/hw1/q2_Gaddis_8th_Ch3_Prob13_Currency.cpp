/*
Author:   Zhongjie Jiang
Due Date: March 9, 2026
Purpose: Currency
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
DOLLAR. To get the most up-to-date exchange rates, search the Internet using the
term “currency exchange rate”. If you cannot find the most recent exchange rates, use
the following:
1 Dollar = 98.93 Yen
1 Dollar = 0.74 Euros
Format your currency amounts in fixed-point notation, with two decimal places of
precision, and be sure the decimal point is always displayed. 
*/

//System Libraries
#include <iostream>//input/output library
#include <iomanip>//formatting library
using namespace std;

//User Libraries

//Global Constants - Physics/Chemistry/Conversions/Array Diamensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc) {
	//Declear Variables
	float usd, //ip, US Dollars in $
		  yen, //op, Japanese Yen in ¥
		  euros; //op, European euros in €

	//Initialize Variables
	cout<<"Enter USD in $ to convert to Yen and Euros."<<endl;
	cin>>usd;

	//Mapping process -> Input to Outputs
	yen=98.93f*usd;
	euros=0.74f*usd;

	//display input/outputs
	cout<<fixed<<setprecision(2)<<usd<<" USD = "<<yen<<" JPY"<<endl;
	cout<<fixed<<setprecision(2)<<usd<<" USD = "<<euros<<" EUR"<<endl;


	//exit the program
	return 0;
	
};
