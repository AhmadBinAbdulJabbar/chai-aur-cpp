#include<iostream>
using namespace std;

// global scope variable
int globalChaiStock = 100;

// call by reference 
// just write an & with the parameters it will give reference
void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;

    // can access global scope 
    cout << "Stock is " << globalChaiStock << endl;

    // local scope variable
    int test = 9;
    if (test == 9)
    {
        // can access test variable here
        int t = test + 1;
    }

    // cout << t; // cann't access here
    
}

int main()
{
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;
    
    return 0;
}