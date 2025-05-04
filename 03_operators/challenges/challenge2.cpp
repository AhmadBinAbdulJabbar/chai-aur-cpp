// **Challenge 2: Assignment Operators**\
//    Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the `+=` assignment operator. Display the updated total.

#include<iostream>
using namespace std;

int main()
{
    int numberOfTeaBags;

    cout << "How many tea bags you have? ";
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 20)
    {
        numberOfTeaBags += 10;
    }

    cout << "You have now " << numberOfTeaBags << " tea bags" << endl;

    return 0;
}