/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

void read(int a[][COLMAX],int & row,int & col){
    int ip;
    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    cin>>row>>col;
    cout<<"Now input the table."<<endl;
    for (int r=0;r<row;r++){
        for (int c=0;c<col;c++){
            cin>>ip;
            a[r][c]=ip;
        }
    }
}

void sum(const int a[][COLMAX],int row,int col,int aug[][COLMAX]){
    int rSum, cSum, totSum;
    rSum=cSum=totSum=0;

    //copy original and calc totsum
    for (int r=0;r<row;r++){ 
        for (int c=0;c<col;c++){
            aug[r][c]=a[r][c];
            totSum+=a[r][c];
        }
    }
    aug[row][col]=totSum;

    //calc row sum
    for (int r=0;r<row;r++){ 
        rSum=0;
        for (int c=0;c<col;c++){
            rSum+=a[r][c];
        }
        aug[r][col]=rSum;
    }

    //calc col sum
    for (int c=0;c<col;c++){ 
        cSum=0;        
        for (int r=0;r<row;r++){
            cSum+=a[r][c];
        }
        aug[row][c]=cSum;
    }    


}

void print(const int a[][COLMAX],int row,int col,int n){
    for (int r=0;r<row;r++){
        for (int c=0;c<col;c++){
            cout<<setw(n)<<a[r][c];
        }
        cout<<endl;
    }    
}
