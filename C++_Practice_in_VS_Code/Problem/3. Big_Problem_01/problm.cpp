/*
Write an application in C++ where you will ask the user to give an input, then you will give the following options to the user to choose from.
    1.	After taking the input give the following outputs: 
a. Print the input 
b. Print if it is a char or number 
c. If it is char print if it is vowel or consonant 
d. Print if it is a small letter or capital letter 
e. If it is a non-zero number print if it is even or odd 
f. Print if it is a prime number 
g. Print if it is a positive number or negative number
    2.	After finishing task 1, give the user the following options to choose from if he gave a number as input: 
•	Convert the number from positive to negative or vice versa 
•	Calculate the factorial of that number 
•	For positive numbers give the following options as well: 
•	Calculate the sum of the first n natural numbers. Where n is the number, the user provided. 
•	Print all the prime numbers up to that number
*/
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
            cout << "It's a Capital Letter" << endl;
        }
        else {
            cout << "It's a Small Letter" <<endl;
        }
    }
    else {
        cout << "it's not a character" <<endl;
    }
    int num = input - '0';         // conver character to integer
    int originalNum = num;
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
    // Odd or Even
    if (num > 0 && num % 2 == 0){
        cout << "It' Even" << endl;
    }
    else {
        cout << "It's Odd" << endl;
    }
    // which type of number
    if (num >= 0){
        cout << "It's a Positive Number" << endl;
    }
    else {
        cout << "It's a Negative Number" << endl;
    }
    //Postive to negative
    if (num>=0 && num <=9){
        num = -num;
        cout << "Swap the number vise-versa: " << num <<endl;
        num = originalNum;
    }
    // Factorial Number
    long fact = 1;
    if (num <0){
        cout << "!Factorial Number" << endl;
    }
    else {
        for (int i = 1; i <= num; i++){
            fact = fact * i;
        }
         cout << "Factorial Of Number: " << fact << endl;
    }
    // Sum of first n natural numbers
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    cout << "Sum of the first " << num << " natural numbers: " << sum << endl;
    // Print all Prime Number
    cout << "All Prime Numbers up to " << num << ": ";
    for(int i = 2; i <= num; ++i) {
        bool isPrime = true;
        for(int j = 2; j * j <= i; ++j) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}