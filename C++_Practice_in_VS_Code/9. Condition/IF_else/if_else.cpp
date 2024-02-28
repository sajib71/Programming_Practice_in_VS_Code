#include<iostream>
using namespace std;
int main (){
    int x;
    int y;
    cout << "Enter Your First Number: ";
    cin >> x;
    cout << "Enter Your Second Number: ";
    cin >> y;
    if (x>y){
        cout << x << " is greater than " <<y;
    }
    else {
        cout << x << " is Smaller than " << y;
    }
    return 0;
}