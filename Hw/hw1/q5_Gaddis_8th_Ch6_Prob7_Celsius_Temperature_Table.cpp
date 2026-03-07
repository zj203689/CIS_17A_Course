/*
Author:   Zhongjie Jiang
Due Date: March 9, 2026
Purpose:  Celsius Temperature Table
Write a function named celsius that accepts a Fahrenheit temperature as an argument. 
The function should return the temperature, converted to Celsius. Demonstrate the function by
calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
and their Celsius equivalents.
*/

//System Libraries
#include <iostream>//input/output library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Physics/Chemistry/Conversions/Array Diamensions

//Function Prototypes
float celsius(float); //converts Fahrenheit to Celsius, op Fahrenheit 

//Execution Begins Here
int main(int argv,char **argc) {
	//Declear Variables
	
	//Initialize Variables
	
	//Mapping process -> Input to Outputs
	
	//display input/outputs
	cout<<"Fahrenheit |   Celsius"<<endl;
	for (int i=0;i<21;i++){
		cout<<setw(10)<<i<<" |"<<setw(10)<<celsius(i)<<endl;
	}
	
	//exit the program
	return 0;
	
};

float celsius(float f){ //converts Fahrenheit to Celsius, op Fahrenheit 
	float c = (f-32)*5/9;
	return c;
}