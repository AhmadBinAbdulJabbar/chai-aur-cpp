#include<iostream>
using namespace std;



int main()
{
    int chaiSales[3][7] = {
        {45, 50, 35, 55, 65, 75, 40},  // shop 1 sales for week
        {30, 35, 45, 50, 55, 65, 35},  // shop 2 sales for week
        {20, 25, 30, 35, 45, 40, 25}   // shop 3 sales for week
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop: " << i+1 << endl;
        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << " cups" << endl;
        }
        
    }
    
    return 0;
}