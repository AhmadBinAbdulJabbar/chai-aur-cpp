// Favorite Tea Input Write a program that takes the user's favorite tea as input using getline and also asks how cups of tea they want using cin. Display the result in a fun message.

// Hint: Combine cin and getline carefully to avoid input issues.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string favoriteTea;
    cout << "Your Favorite Tea is? ";
    getline(cin, favoriteTea);

    int teaQuantity = 0;
    cout << "How many cups of " << favoriteTea << " you want? ";
    cin >> teaQuantity; 

    cout << "Coming " << teaQuantity << " of " << favoriteTea << " right away for our tea lover";
    return 0;
}