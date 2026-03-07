/*
Author:   Zhongjie Jiang
Due Date: March 9, 2026
Purpose:  Population
Write a program that will predict the size of a population of organisms. The program
should ask the user for the starting number of organisms, their average daily 
population increase (as a percentage), and the number of days they will multiply. A loop
should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population. 
Do not accept a negative number for average daily population increase. Do not
accept a number less than 1 for the number of days they will multiply.
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
	float popSta, //ip, starting population 
		  popInc, //ip, average daily increase in % 
		  dayMult, //ip, days to multiply
		  sizeDay; //op, size of population in nth day

	//Initialize Variables
	cout<<"This program will predict the size of a population of organisms."<<endl;
	cout<<"Enter your starting population:"<<endl;
	cin>>popSta;
	cout<<"Enter your average daily increase in percentage:"<<endl;
	cin>>popInc;
	cout<<"Enter the days to multiply:"<<endl;
	cin>>dayMult;

	sizeDay=popSta;
	popInc=popInc/100+1;

	//Mapping process -> Input to Outputs
	for (int i=0; i<dayMult+1;i++){
		cout<<"Population size on day "<<i<<": "<<sizeDay<<endl;
		sizeDay*=popInc;
	}

	//display input/outputs
	
	//exit the program
	return 0;
	
};
