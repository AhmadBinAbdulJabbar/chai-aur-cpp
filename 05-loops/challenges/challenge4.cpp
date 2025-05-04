// 4. **Challenge 4: Break and Continue**\
//    Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using `continue`. If "No Tea" is encountered, stop the loop using `break`.

#include<iostream>
using namespace std;

int main()
{
    string teaTypes[] = {"Black Tea", "Oolong Tea", "Harbal Tea", "Lemon Tea", "Gingar Tea", "No Tea", "Chai"};
    for (int i = 0; i < teaTypes->length(); i++)
    {
        if (teaTypes[i] == "No Tea")
        {
            break;
        }
        else if (teaTypes[i] == "Harbal Tea")
        {
            continue;
        }
        
        cout << "Serving " << teaTypes[i] << " ... " << endl;
        
        
    }
    
    
    return 0;
}