/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
//Library for our functions utilized in this question.
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float a, b, c, d; //set inputs
    
    
    //Initialize or input data here
    cin>>a>>b>>c>>d; //take inputs
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    
    //set for a
    cout<<fixed //show decimals
        <<setprecision(0)<<"        "<<a //no decimals
        <<setprecision(1)<<"       "<<a
        <<setprecision(2)<<"      "<<a
        <<endl;
      
    //set for b    
    cout<<setprecision(0)<<setw(9)<<b //no decimals
        <<setprecision(1)<<setw(10)<<b
        <<setprecision(2)<<setw(10)<<b
        <<endl;
          
    //set for c    
    cout<<setprecision(0)<<setw(9)<<c //no decimals
        <<setprecision(1)<<setw(10)<<c
        <<setprecision(2)<<setw(10)<<c
        <<endl;
        
    //set for d    
    cout<<setprecision(0)<<setw(9)<<d //no decimals
        <<setprecision(1)<<setw(10)<<d
        <<setprecision(2)<<setw(10)<<d;        
        

    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}