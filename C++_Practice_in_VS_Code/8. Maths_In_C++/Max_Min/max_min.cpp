#include<iostream>
#include<cmath>         // C++ math library
using namespace std;
int main (){
    int x = 10;
    int y = 20;
    int result;

    // max()
    result = max(x,y);
    cout <<"The Maximum Value is: "<< result <<endl;

    // min()
    result = min(x,y);
    cout <<"The Minimum Value is: "<< result;
}