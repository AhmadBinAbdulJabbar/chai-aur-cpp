// 5. **Challenge 5: Nested Loops**\
//    Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).

#include<iostream>
using namespace std;

int main()
{
    cout << "Brewing Schedule for week." << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << "Brewing for day " << i << endl;
        for (int j = 1; j <= 2; j++)
        {
            cout << "Brewing tea for breakfast ... " << endl;
        }
        for (int j = 1; j <= 2; j++)
        {
            cout << "Brewing tea for lunch ... " << endl;
        }
        for (int j = 1; j <= 2; j++)
        {
            cout << "Brewing tea for dinner ... " << endl;
        }
        
    }
    
    
    return 0;
}
