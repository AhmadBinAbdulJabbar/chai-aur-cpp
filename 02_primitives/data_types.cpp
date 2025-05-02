#include<iostream>

using namespace std;

int main(){
    cout << "Data Types in CPP | Primitives" << endl;

    int teaLeaves = 50;
    float waterTemperature = 85.5;

    // double priceOfTea = 299.999; // max three decimal points
    double priceOfTea = 299.99;
    // char teaGrade = 'AB'; // error
    char teaGrade = 'A';

    // bool isTeaReady = 5; // equalivalent to true
    // bool isTeaReady = ''; // error
    bool isTeaReady = true;

    cout << priceOfTea << endl;
    cout << isTeaReady << endl;
}