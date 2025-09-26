// Ayesha Asif
// 2024-csr-002c:\Users\User\Desktop\Lab 1 Ayesha Asif 2024-csr-002\task6.cpp
// task 2(Memory leak bad vs good)

#include<iostream>
using namespace std;
void leaky(){ //function that wastes a memory of 100 integers
    int* data=new int[100];
    //forgot to free memory
    }
void fixed(){  //function that timely frees the memory
    int* data=new int[100];
    delete[] data;
}
int main(){
     //calls a 1000 times->memory waste
   for(int i=0;i<1000;i++){
    leaky();
   }
   cout<<"Leaky loop done(memory wasted)"<<endl;
   //good practice
   for(int i=0;i<1000;i++){ 
    fixed();
   }
   cout<<"Fixed loop done(no leaks)";
   return 0;
  //This program demonstrates the difference between a memory leak (when allocated memory is not freed) and proper memory management (when allocated memory is deleted after use). 
}