#include <iostream>
using namespace std;

void swapNumbers (int &num_1, int &num_2){
    int tempNum = num_1;
    num_1 = num_2;
    num_2 = tempNum;
}

int main() {
    int input_1, input_2;
    cout << "Enter First Input: ";
    cin >> input_1;
    cout << "Enter Second Input: ";
    cin >> input_2;
    cout << " Your First Input Is: "<< input_1 << endl;
    cout << "Your Second Input Is: "<< input_2 <<endl;

    swapNumbers (input_1, input_2);
    cout << "After Swaping The Numbers: "<<endl;
    cout << "First Numbers is: " <<input_1 << endl;
    cout << "Second Numbers is: " <<input_2 ;


    return 0;
}
