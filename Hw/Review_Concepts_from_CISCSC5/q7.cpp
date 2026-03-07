/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 *      signed short range [-32767,32767]
 *      unsigned short range [0,65535]
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        //cout<<"unsho="<<unShort<<endl; //check
        return 0;
    }
    //cout<<"unsho="<<unShort<<endl; //check
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
            //cout<<"snsho="<<snShort<<endl; //check
        return 0;
    }
    //cout<<"snsho="<<snShort<<endl; //check

    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}

bool  inRange(const char a[],unsigned short & unSho){
    unSho=0;
    //0=48, 9=57
    for (int i=0, conv=0;a[i]!='\0';i++) { //check ip
        conv=a[i]-48;
        if (conv>=0 && conv<=9){
            unSho=unSho*10+conv;
        } else {
            return false;
        }
        if (unSho>65535) { //check range
            return false;
        }
    }
    return true;
}

bool  reverse(unsigned short unSho,signed short & sSho){
    int conv=0;
    for (int i=0;i<5;i++){
        conv=conv*10+(unSho%10);
        unSho/=10;
    }
    if (conv>32767) { //check range
        return false;
    }
    sSho=conv;
    return true;
}

short subtrct(signed short sSho,int n){
    int calc=sSho-n;
    if (calc<0){
        return sSho;
    } else {
        return calc;
    }
}