// Roll no:2024-csr-002
// Name: Ayesha Asif
// Task5 -- Dangling Pointer(show the fix)
#include<iostream>
using namespace std;
int main(){
    int*p = new int (50);  //Dynamically allocate memory for one int, set value=50
    cout<<"p before delete: "<<*p<<"\n";  //prints 50
    delete p;  //Frees memory
    p = nullptr;  // Important: Set pointer to null so it's not dangling
    cout<<"Pointer safely set to nullptr after delete.\n";
    return 0;


}
//  This program shows a dangling pointer situation and shows the fix by setting the pointer to nullptr after deleting memory.