// ### 3. **Nested If-Else**

// ### **Challenge:** A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:\* More than 20 cups: 20% discount

// - Between 10 and 20 cups: 10% discount
// - Less than 10 cups: No discount

#include<iostream>
using namespace std;

int main()
{
    int numberOfCups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "How many cups of tea you want? " << endl;
    cin >> numberOfCups;

    totalPrice = numberOfCups * pricePerCup;
    cout << "Price Per Cup is: " << pricePerCup << endl;
    cout << "Total before discount: " << totalPrice << endl;
    if (numberOfCups > 20)
    {
        cout << "You get 20% Discount" << endl;
        discount = 0.20;
    }
    else if (numberOfCups > 10)
    {
        cout << "You get 10% discount" << endl;
        discount = 0.10;
    }
    else {
        cout << "No discount" << endl;
        discount = 0;
    }

    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= (totalPrice * discount);

    cout << "Total Bill is: " <<  totalPrice;
    
    

    return 0;
}