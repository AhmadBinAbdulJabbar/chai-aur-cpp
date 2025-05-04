// 3. **Challenge 3: For Loop**\
//    Create a program that prints the first 10 multiples of 2, representing the total tea bags required for making batches of tea.

#include<iostream>
using namespace std;

int main()
{
    cout << "Tea Bags Required for each Batch: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        int teaBags = i * 2;
        cout << "Batch " << i << ": " << teaBags << endl;
    }
    
    
    return 0;
} 