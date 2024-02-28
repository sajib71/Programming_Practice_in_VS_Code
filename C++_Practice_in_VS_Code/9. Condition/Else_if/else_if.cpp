#include<iostream>
using namespace std;
int main (){
    int x;
    cout << "Enter Your Marks: ";
    cin >> x;
    if (x>=80){
        cout <<"Your Result is: A+";
    }
    else if (x>=70) {
        cout <<"Your Result is: A";
    }
        else if (x>=60) {
        cout <<"Your Result is: A-";
    }
            else if (x>=32) {
        cout <<"Fail";
    }
    return 0;
}