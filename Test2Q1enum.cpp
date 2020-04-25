//using the enumeration types
#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void groups(int whatGroup);
enum nums { x = 9, y = 10, z = 5, w = 6 };
enum levelDifficulty { easy = 1, medium = 2, hard = 3 };
void groups(int whatGroup){
    string result;
    whatGroup == easy ? result = "result belong to group1" :"";
    whatGroup ==medium ? result = "result belong to group2" : "";
    whatGroup == hard ? result = "result belong to group3" : "";
    whatGroup > hard ? result = "it is undefined " : "";
    cout << result << endl;
}

int main(){

    int userInput, whatGroup;
    cout << "enter 1 for calculation in +, -, *, and /"<<endl;
    cout << "enter 2 for calculation in ^, &, |, and %" <<endl;
    cout << "enter 3 for calculation in >> and << "<<endl;
    cin >> userInput;

    if (userInput == 1){
        cout<<"x+y = "<< x+y<<" "<< endl;
        cout<<"x-y = "<< x-y<<" "<< endl;
        cout<<"z*w = "<< z*w<<" "<< endl;
        cout<<"z/w = "<< z/w<<" "<< endl;
        whatGroup = userInput;
        groups(userInput);

    }else if (userInput ==2){
        cout<<"x^y = "<< (x^y)<<" ";
        cout<<"x&y = "<< (x&y)<<" ";
        cout<<"x|y = "<< (x|y)<<" ";
        cout<<"x%z = "<< (x % z)<<" ";
        whatGroup = userInput;
        groups(userInput);
    }else if (userInput ==3){
        cout<<"z >> 1 = "<< (z >> 1)<<" ";
        cout<<"x << 1 = "<< (x << 1)<<" ";
        whatGroup = userInput;
        groups(userInput);
    }else{
        cout << "ops, I don't know the answers"<<endl;
    }
}