#include<iostream>
using namespace std;
int main (){
    char input;
    cout << "Enter An Input: ";
    cin >> input;
    cout << "You Have Enter: " << input <<endl;
    if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
        cout << "It's a Charecter" <<endl;
        if ((input == 'a' || input == 'A' || input == 'e' || input == 'E' ||
             input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U')){
            cout << "It's a Vowel" <<endl;
        }
        else {
            cout << "It's a Consonant" << endl;
        }
        if((input >= 'A' && input <= 'Z')){
            cout << "It's a Capital Letter";
        }
        else {
            cout << "It's a Small Letter";
        }
    }
    else {
        cout << "it's not a character" <<endl;
    }
    int num = input - '0';         // conver character to integer
    bool isPrime = true;
    if (num <= 1){
        isPrime = false;
    }
    else{
        for(int i = 2; i * i <= num; ++i){ // iterate up to num*num <= num
            if(num % i == 0){
                isPrime = false;
                break;
            }
    }
    }
    if (isPrime && num > 1){
        cout << "It's a Prime Number" << endl;
    }
    else {
        cout << "It's not a Prime Number" << endl;
    }
    if (input > 0 && input % 2 == 0){
        cout << "It' Even";
    }
    else {
        cout << "It's Odd" << endl;
    }
    if (input >= 0){
        cout << "It's a Positive Number";
    }
    else {
        cout << "It's a Negative Number";
    }
    return 0;
}