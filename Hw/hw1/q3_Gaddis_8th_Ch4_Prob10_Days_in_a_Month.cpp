/*
Author:   Zhongjie Jiang
Due Date: March 9, 2026
Purpose: Days in a Month
Write a program that asks the user to enter the month (letting the user enter an 
integer in the range of 1 through 12) and the year. The program should then display the
number of days in that month. Use the following criteria to identify leap years:
1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and
only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
2. If the year is not divisible by 100, then it is a leap year if and if only it is 
divisible by 4. For example, 2008 is a leap year but 2009 is not.

Here is a sample run of the program:
Enter a month (1-12): 2 [Enter]
Enter a year: 2008 [Enter]
29 days 
*/

//System Libraries
#include <iostream>//input/output library
using namespace std;

//User Libraries

//Global Constants - Physics/Chemistry/Conversions/Array Diamensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc) {
	//Declear Variables
	int month,
		year,
		days; 
	
	//Initialize Variables
	cout<<"Enter a month (1-12):"<<endl;
	cin>>month;
	cout<<"Enter a year:"<<endl;
	cin>>year;

	//Mapping process -> Input to Outputs
	if (month==2){
		//set days to 29 if it's a leap year, 28 if not
		days = ((year%4==0 && year%100!=0) || year%400==0)? 29 : 28;
	} else if (month%2==0) { //if month is odd
		days = 31; 
	} else {
		days = 30; 
	}


	//display input/outputs
	cout<<days<<" days"<<endl;
	//exit the program
	return 0;
	
};
