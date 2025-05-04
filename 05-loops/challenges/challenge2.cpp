// 2. **Challenge 2: Do-While Loop**\
   Write a program that asks the user if they want to add more sugar to their tea. Keep asking until they respond with "enough." Use a `do-while` loop for this.
#include<iostream>
using namespace std;

int main()
{
    string response;
    do
    {
        cout << "Do you want more sugar!" << endl;
        getline(cin, response);

    } while (response != "enough" && response != "no");
    
    cout << "Have a nice day. enjoy your tea." << endl;

    
    return 0;
}