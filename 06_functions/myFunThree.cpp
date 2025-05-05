#include<iostream>
using namespace std;

// call by reference 
// just write an & with the parameters it will give reference
void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main()
{
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;
    
    return 0;
}