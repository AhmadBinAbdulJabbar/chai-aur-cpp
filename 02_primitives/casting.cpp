#include<iostream>
using namespace std;

int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    // int roundedTeaPrice = (short) teaPrice;

    cout << roundedTeaPrice << endl;

    int teaQuantity = 2;

    // int totalPrice = teaPrice * teaQuantity;
    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice << endl;

    return 0;
}