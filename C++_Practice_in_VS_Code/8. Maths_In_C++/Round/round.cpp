#include<iostream>
#include<cmath>
using namespace std;
int main (){
    double value = 2.55;        // if the value is more than ".50" then it will print next full interger value
    int result;                 // in this case the next integer value is 3 so it will print 3
    result = round(value);
    cout << result;
}

// OUTPUT : 3