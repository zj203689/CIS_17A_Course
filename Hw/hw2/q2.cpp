/*
Author:  	 Zhongjie Jiang
Due Date:	 March 22, 2026
Purpose: 	 Median - Dynamic Memory Allocation

Calculate the Median by creating a dynamic float array 2 larger in size 
more than the dynamic integer array.
Output the results with 2 decimal places.

Create the following functions and use them, here are the prototypes

int *getData(int &);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data

void prntMed(float *);     //Print the median Array
*/

//System Libraries
#include <iostream>//input/output library
#include <iomanip> //formatting library
using namespace std;

//User Libraries

//Global Constants - Physics/Chemistry/Conversions/Array Diamensions

//Function Prototypes
int *getData(int &);         //Return the array size and the array
void prntDat(int *,int);    //Print the integer array
float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data
void prntMed(float *);     //Print the median Array

//Execution Begins Here
int main(int argv,char **argc) {
	//Declear Variables
	int ipNum; //ip, number of inputs 
	float num, //ip, take in the list of number to calculate median
		  median; //op, median of the list

	//Initialize Variables
	for (int i=0; i<ipNum; i++){
		cin>>ipNum;

	}

	//Mapping process -> Input to Outputs
	median();

	//display input/outputs
	prntDat();
	prntMed();

	//exit the program
	return 0;
	
};

int *getData(int & a){         //Return the array size and the array

}

void prntDat(int * a,int size){    //Print the integer array

}

float *median(int * a,int size){  //Fill the median Array with the Float array size, the median, and the integer array data

}

void prntMed(float * a){     //Print the median Array

}