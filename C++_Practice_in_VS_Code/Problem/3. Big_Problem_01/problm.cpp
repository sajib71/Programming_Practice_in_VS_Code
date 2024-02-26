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
        cout << "it's not a charecter" <<endl;
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