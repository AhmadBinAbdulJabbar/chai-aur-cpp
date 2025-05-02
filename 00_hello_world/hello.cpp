#include<iostream>

// one method
// using namespace std;

// second method
using std::cout;
using std::endl;

namespace myChai{
    void display(){
        cout << "my chai namespace" << endl;
    }
}

int main(){
    cout << "Hello, World" << endl;
    cout << "Hello chai from ahmad" << endl;

    myChai::display();

    std::cout << "adding namespace method" << std::endl;

    return 0;
}