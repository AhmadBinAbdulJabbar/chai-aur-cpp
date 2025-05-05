#include<iostream>
using namespace std;

int main()
{
    // syntax
    // [capture-clause] (parameters) -> return-type { 
    // definition
    // }

    // lambda function
    [](){
        cout << "basic lambda function" << endl;
    }();

    // another example with parameters
    auto res = [](int x){
        return x+x;
    };

    cout << res(5) << endl;

    // add function
    auto add = [](int x, int y){
        cout << "Sum = " << x + y << endl;
    };

    add(2, 3);

    // lambda function with return type
    auto operation = [](int a, int b, string op) -> double {
        if (op == "sum")    
        {
            return a + b;
        }
        else
        {
            return (a + b) / 2.0;
        }
    };

    int num1 = 1, num2 = 2;
    cout <<"Sum = " << operation(num1, num2, "sum") << endl;
    cout <<"Average = " << operation(num1, num2, "avg") << endl;

    // C++ Lambda Function Capture Clause
    // Capture by Value
    // This is similar to calling a function by value. Here, the actual value is copied when the lambda is created. 

    int mainVariable = 100;
    auto myLambda = [mainVariable](){
        // mainVariable = 200; // expression must be a modifiable lvalue (meaning we cann't modify it when passing as value)
        cout << "Capture by Value accessing variable inside the function: " << mainVariable << endl;
    };
    
    myLambda();
    
    // Capture by Reference
    // This is similar to calling a function by reference i.e. the lambda has access to the variable address.

    auto myLambdaFun = [&mainVariable](){
        mainVariable = 900;
    };

    myLambdaFun();
    cout << "After Capture by Reference: " << mainVariable << endl;

    return 0;
}