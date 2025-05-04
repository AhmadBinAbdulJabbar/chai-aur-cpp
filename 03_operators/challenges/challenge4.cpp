// **Challenge 4: Bitwise Operators**\
   Write a program that uses bitwise AND (`&`) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.  

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Tea Shop ===" << endl << endl;
    cout << "--- MENU --- " << endl;
    cout << "1. Green    Rs. 100" << endl;
    cout << "2. Black    Rs. 200" << endl;
    cout << "4. Oolong   Rs. 300" << endl;
    cout << endl;

    int greenStock = 1, blackStock = 2, oolong = 0;

    int teaNumber;
    cout << "To check avalibility enter the tea number (1,2, 4): ";
    cin >> teaNumber;

    if(teaNumber == 1) {
        if(teaNumber & greenStock){
            cout << "Green Tea is InStock" << endl;
        }
    }
    else if (teaNumber == 2 && (blackStock & teaNumber)) 
    {
        cout << "Black Tea is Instock" << endl;
    }
    else if (teaNumber == 4 && (oolong & teaNumber)){
        cout << "oolong Tea is Instock" << endl;
    }
    else {
        cout << "Not in Stock" << endl;
    }
    

    return 0;
}