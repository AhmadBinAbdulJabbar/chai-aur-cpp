// 1. **Challenge 1: While Loop**\
//    Write a program that keeps asking the user to input the number of tea bags they have left. Stop when the number of bags is 0, and print a message that they are out of tea bags.
#include<iostream>
using namespace std;

int main()
{
    while (true)
    {
        int cups;
        cout << "How many tea bags you have? ";
        cin >> cups;

        if (cups == 0){
            cout << "You are out of cups" << endl;
            break;
        }

        cout << "You have " << cups << " left." << endl;
    }
    
    
    return 0;
}