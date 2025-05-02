// Challenge 2: Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting

// Hint: Use both float and int types, and demonstrate type casting.


// Theory order of Order of Typecast in Implicit Conversion
// bool --> char --> short int --> int --> unsigned int --> long --> unsigned long --> long long --> float --> double --> long double

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string teaType;
    float teaBasePrice;

    cout << "Enter Type Of Tea (Name): ";
    getline(cin, teaType);

    cout << "Enter Base Price: ";
    cin >> teaBasePrice;

    float increasePriceBy10 = teaBasePrice * 0.10;
    cout << "10% of " << teaBasePrice << " is " << increasePriceBy10 << endl;
    float newTeaPrice = teaBasePrice + increasePriceBy10;
    cout << "New Tea price before type casting: " << newTeaPrice << endl;
    // cout << "Tea New Price: " << round(newTeaPrice); // rounding like math

    int rounded_Tea_Price = static_cast <int> (newTeaPrice);
    cout << "Tea New Price: " << rounded_Tea_Price; // truncating the decimal part  

    return 0;
}