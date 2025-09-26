#include<iostream>
using namespace std;
int main(){
    // Ayesha Asif
    // 2024-csr-002
    // task 1(pointers and pointer to pointer)

    int x=42;//create integer x value 42
    int* p=&x;     //p is a pointer that stores adress of 
    int** q=&p;   //q is a pointer that stores the address of ppointer to pointer
    cout<<"x: "<<x<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"**q: "<<**q<<endl;
    **q=100;
    cout<<"After **q=100 x"<<x;   //**q actually prints value at p which is 42 so accordingly value of x changes to 42
    

    // Description:
             //This program demonstrates how a variable’s value can be accessed directly, through a pointer, and through a pointer-to-pointer.
}