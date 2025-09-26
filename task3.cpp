 // Ayesha Asif
// 2024-csr-002
// task 2(Array of pointers)

#include<iostream>
using namespace std;
int main(){
    const char* names[]={"Ali","Sara","Ahmad","Noor","Ayesha"};
    int n=sizeof(names)/sizeof(names[0]);  //give exact number of elements in array
    for(int i=0;i<n;i++){
        cout<<"names["<<i<<"] : "<<names[i]<<endl;//loop to print what actually is in array
       }
       const char* replacment="Fatima"; //create a variable to store a value for replacing
       names[2]=replacment;
       cout<<"After replacement"<<endl;
        for(int i=0;i<n;i++){  //loop to print the array after replacement
        cout<<"names["<<i<<"] : "<<names[i]<<endl;
       }
       //This program shows how to use an array of pointers to strings and demonstrates replacing one element in the array with another string value
}