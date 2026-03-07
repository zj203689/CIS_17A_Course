/*
Author:   Zhongjie Jiang
Due Date: March 9, 2026
Purpose: Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures. 
F is the Fahrenheit temperature, and C is the Celsius temperature. 
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
	float c, //ip, Celsius
		  f; //op, Fahrenheit

	//Initialize Variables
	cout<<"This program converts Celsius temperatures to Fahrenheit temperatures."<<endl;
	cout<<"Enter Celsius for conversion:"<<endl;
	cin>>c;
	//Mapping process -> Input to Outputs
	f=(9.0f/5)*c+32;

	//display input/outputs
	cout<<c<<" degrees Celcius = "<<f<<" degrees Farenheit"<<endl;

	//exit the program
	return 0;
	
};
