// Challenge1
// Tea Information Display
// Write a program that Declares variable to store the type of tea, its price per kilogram (float),  and its rating (char). Use data types effectively and print then in a formatted output using escape sequences.

// HintL Use \n for new lines and " to quote the tea name.

#include<iostream>
using namespace std;
 
int main(){
    string teaType;
    float teaPricePerKilo;
    char teaRating;
    cout << "Enter Type Of Tea (Name): ";
    getline(cin, teaType);

    cout << "Enter Price Per Kilo: ";
    cin >> teaPricePerKilo;

    cout << "Enter Rating: ";
    cin >> teaRating;


    // cout << "Tea Type | Price per Kg | Rating " << endl;
    // cout << teaType << " | " << teaPricePerKilo << " | " << teaRating << endl;

    cout << "Tea Type: \"" << teaType << "\nPrice Per Kg: " << teaPricePerKilo << "\nRating: " << teaRating << endl;
    return 0;
}