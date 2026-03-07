/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * easy
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}


void read(vector<int> & ev, vector<int> & od){
    int n, ip;
    cout<<"Input the number of integers to input."<<endl;
    cin>>n;
    cout<<"Input each number."<<endl;
    for(int i=0; i<n; i++){
        cin>>ip;
        if (ip%2) { //add to even if ip%2=1
            od.push_back(ip);
        } else {
            ev.push_back(ip);
        }
    }
    
}

void copy(vector<int> ev, vector<int> od,int a[][COLMAX]){
    for (int i=0; i<ev.size();i++) {
        a[i][0]=ev[i];
    }   
    for (int i=0; i<od.size();i++) {
        a[i][1]=od[i];
    }   
}

void prntVec(vector<int> ev, vector<int> od,int n){//int n is the format setw(n)
    int max= ev.size()>od.size()? ev.size():od.size();
    cout<<"    Vector      Even       Odd"<<endl;
    for (int i=0;i<max;i++) {
        if(i<ev.size()){
            cout<<setw(20)<<ev[i];
        } else {
            cout<<setw(20)<<"";
        }

        if(i<od.size()){
            cout<<setw(10)<<od[i]<<endl;
        } else {
            cout<<setw(10)<<""<<endl;
        }
    }    
}

void prntAry(const int a[][COLMAX],int evSize,int odSize,int n){
    int max= evSize>odSize? evSize:odSize;
    cout<<"     Array      Even       Odd"<<endl;
    for (int row=0;row<max;row++) {
        if(row<evSize){
            cout<<setw(20)<<a[row][0];
        } else {
            cout<<setw(20)<<"";
        }
        if(row<odSize){
            cout<<setw(10)<<a[row][1]<<endl;
        } else {
            cout<<setw(10)<<""<<endl;
        }
        
    }  
}
