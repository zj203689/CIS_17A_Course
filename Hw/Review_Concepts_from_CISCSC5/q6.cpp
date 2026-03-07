/* 
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}

int  srch1(const char s[],const char p[],int n){//Search for 1 occurrence
    int countS, countP; //count the length of sentence and pattern
    countP=countS=0;
    while (s[countS]!='\0') { //sentence array length
        countS++;
    }

    while (p[countP]!='\0') {//pattern array length
        countP++;
    }

    for (int si=n; si<=countS-countP ;si++){
        int pi=0; //pattern index

        while (pi<countP && s[si+pi]==p[pi]) {
            //cout<<"si="<<si<<" pi="<<pi<<" s[si+pi]="<<s[si+pi]<<" p[pi]="<<p[pi]<<endl; //test
            pi++;
        }


        if (pi==countP) { //end of p[]
            //cout<<"loop end** si="<<si<<" pi="<<pi<<endl; //test
            return si+1;
        }
    //cout<<"loop end*** si="<<si<<" pi="<<pi<<endl; //test
    }
    return -1;

}

void srchAll(const char s[],const char p[],int m[]){//Search for all occurrences
    int occur, //-1 if found none, outputs position otherwise
        i, //index for match array
        posi; //position left off after finding

    i=posi=0;
    occur=srch1(s,p,posi); //initial search

    //keep search if found one 
    while (occur!= -1){
        m[i]=occur-1; //add index of found to match array
        i++;
        posi=occur;
        occur=srch1(s,p,posi); // search
    }
    m[i]=-1;
}

void print(const char a[]){//Print the character arrays
    //cout<<"test1"<<endl;
    cout<<a<<endl;
}

void print(const int m[]){ //Print the array of indexes where the pattern found
    //cout<<"test2"<<endl;
    if (m[0] == -1){
        cout<<"None"<<endl;
    } else {
        for (int i=0; m[i]!=-1;i++){
            cout<<m[i]<<endl;
        }
    }
}
