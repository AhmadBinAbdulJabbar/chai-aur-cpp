// function syntax
// returnType funcitonName(parameters){
//     // function body

//     // return  
//     // void   
// }

#include<iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}

// declaration of function
void serveChai(int cups);
 
void makeChai(){
    cout << "Boiling water, addig tea leaves, straining ..." << endl; 
}

void serveChai(string teaType = "Masala Tea"){
    cout << "Serving " << teaType << endl;
}

int main()
{
    int temp = checkTemperature(50);
    // cout << temp << endl;
    // makeChai(); // calling a function
    // serveChai(3);

    serveChai("Lemon Tea");
    serveChai();
    return 0;
}

void serveChai(int cups){
    cout << "Serving " << cups << " of chai" << endl;
}


