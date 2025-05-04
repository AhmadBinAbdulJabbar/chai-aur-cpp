// 1. **Challenge 1: If Statement**\
   Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"

#include<iostream>
using namespace std;

int main()
{
    string favoriteTea;
    
    cout << "What is your favorite Tea? ";
    getline(cin, favoriteTea);

    if(favoriteTea == "oolong" || favoriteTea == "Oolong" || favoriteTea == "oolong tea" || favoriteTea == "Oolong Tea"){
        cout << "You have excellent taste!" << endl;
    }
    else {
        cout << "Great Taste";
    }

    return 0;
}