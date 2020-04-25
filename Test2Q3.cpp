#include <iostream>
#include <ctime>
using namespace std;
void StaticArray();
void HeapArray(int n);
void StackArray(int n);
int main()
{
    unsigned int start, end;
    start = clock();
    for(int i=0;i<121212;i++)
    StaticArray();
    end = clock();
    cout<<"Time for Static Array: "<<(end - start)<<" ms"<<endl;  
    
    start = clock();
    for(int i=0;i<121212;i++)
    StackArray(121212);
    end = clock();
    cout<<"Time for Stack Array: "<<(end - start)<<" ms"<<endl;
    
    start = clock();
    for(int i=0;i<121212;i++)
    HeapArray(121212);
    end = clock();
    cout<<"Time for Heap Array: "<<(end - start)<<" ms"<<endl; 
}

void StaticArray(){
  static int array[121212];
}

void StackArray(int n){
  int array[n];
}

void HeapArray(int n){
  int *array = new int[n];
}
