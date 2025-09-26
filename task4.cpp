// Ayesha Asif
// 2024-csr-002
// task 2(Dangling pointer)

#include<iostream>
using namespace std;
int main(){
    int *ptr=new int(50); //dynamically alloctaes memory for one int
    cout<<"*ptr before delete: "<<*ptr<<endl; //first print value 
    delete ptr; 
    //after that we delete memory that is created on heap
     ptr=nullptr; 
     //to set to nullptr so its not  dangling
     cout<<"Pointer safrly set to nullptr after delete"<<endl;
    return 0;


    //This program demonstrates how to prevent a dangling pointer by first deleting dynamically allocated memory and then safely setting the pointer to nullptr to avoid accidental access to freed memory.
}