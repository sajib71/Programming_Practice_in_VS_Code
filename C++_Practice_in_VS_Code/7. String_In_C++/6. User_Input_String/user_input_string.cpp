#include<iostream>
#include<string>
using namespace std;
int main (){
    string fullName;
    string universityName;
    cout <<"Enter Your Full Name: ";
    getline (cin, fullName);
    cout << "Enter Your University Name: ";
    getline (cin, universityName);          // using "getline" function we can take multiple string from user
    cout << "Your Full Name is: "<< fullName <<endl << "Your University Name is: "<< universityName;
    return 0;
}

// OUTPUT : 

/*
Your Full Name is: Sanaullah Sajib
Your University Name is: Dhaka University
*/