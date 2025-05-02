#include<iostream>
#include<string>
using namespace std;

int main(){
    // char ch = 'ABC'; // warning + last character is stored
    // cout << ch <<endl;

    // string favoriteTea = "Lemon Tea\n";
    string favoriteTea = "Lemon Tea\t";
    // char favoriteTea[] = "Lemon Tea";

    string description = "known as \"best\" tea ";

    cout << favoriteTea << description <<endl;
    return 0;
}