// **Challenge 3: Relational and Logical Operators**\
//    A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include<iostream>
using namespace std;

int main()
{
    int cups;
    cout << "Enter number of cups you want: ";
    cin >> cups;

    bool member;
    cout << "Are you a member? (Enter 1 for yes, 0 for No): ";
    cin >> member;

    int year = 0;
    if(member == 1){
        cout << "How many years no are a member? ";
        cin >> year;
    }

    if (year >= 1 || cups > 12)
    {
        cout << "You get discount" << endl;
    }
    else
    {
        cout << "No discount for You" << endl;
    }
    
    return 0;
}
