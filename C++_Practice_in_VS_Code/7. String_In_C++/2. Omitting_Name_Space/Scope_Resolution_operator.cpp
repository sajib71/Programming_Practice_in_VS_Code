// simple string example with Omitting Name Space using scope resolution operator
// Note: If we use "::"(scope resolution operator) then we should use it every line before the code.
// This is alternation of "using namespace std;"

#include<iostream>
#include<string>
int main (){
    std::string name = "Sanaullah Sajib";   // "::" this sign is called "scope resolution operator"
    std::cout << name;
    return 0;
}