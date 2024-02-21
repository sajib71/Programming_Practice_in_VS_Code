/*
The "+" operator can be usded between string to add them together
to make a new string. This is called concatenation.
*/

#include<iostream>
using namespace std;
int main (){
    string firstname = "Sanaullah ";
    string lastname = "Sajib";
    string fullname = firstname + lastname;
    cout << fullname;
    return 0;
}

//OUTPUT : Sanaullah Sajib