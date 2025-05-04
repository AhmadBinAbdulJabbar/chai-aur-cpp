// 1. **Challenge 1: Arithmetic Operators**\
//    Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include<iostream>
using namespace std;

int main(){
    int teaPacksQty;
    double pricePerPack;
    cout << "Enter number of tea packs: ";
    cin >> teaPacksQty;

    cout << "Enter Price Per Pack: ";
    cin >> pricePerPack;

    double totalPrice = teaPacksQty * pricePerPack;
    double discountedPrice =  totalPrice - (totalPrice * 0.10);

    cout << "Discounted Price: " << discountedPrice;
    return 0;
}

