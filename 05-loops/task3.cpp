// ## 3. For Loop

// Challenge:
// Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.


#include<iostream>
using namespace std;

int main()
{   
    int teaCups = 5;
    
    int i = 100;
    for(int counter = 1; counter <= 5; counter++)
    {
        cout << "Brewing cup " << counter << " of tea..." << endl;
    }

    cout << i << endl;
    cout << "outside of loop" << endl;


    
    return 0;
}