#include <iostream>
using namespace std;

int main () {
    for(int i=5; i>=1; i--){
        // print the spaces
        for (int j=1; j<=5-i; j++){
            cout << " ";
        }
        // print the symbol
        for (int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << endl;


    }
}