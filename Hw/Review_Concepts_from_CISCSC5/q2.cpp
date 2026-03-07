/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char a[][COLMAX],int & rowDet){//Outputs row and columns detected from input
    int colDet=0;
    //int count=0; //count the length of array

    for (int i=0; (i<20) && cin>>a[i];i++){
        while (a[i][colDet]!='\0'){
            colDet++;
        }
        rowDet=i+1;
    }

    return colDet;
};

void sort(char a[][COLMAX],int row,int col){//Sort by row
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<row;j++){
            if(strcmp(a[i],a[j]) > 0){
                for(int s=0;s<COLMAX;s++){
                    char temp=a[i][s];
                    a[i][s]=a[j][s];
                    a[j][s]=temp;
                }
            }
        }
    }
};

void print(const char a[][COLMAX],int row,int col){//Print the sorted 2-D array
    for (int i=0; i<row; i++){
        cout<<a[i]<<endl;
    }
};

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    //cout<<"colDet="<<colDet<<" rowdet="<<rowDet<<endl; //test
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

