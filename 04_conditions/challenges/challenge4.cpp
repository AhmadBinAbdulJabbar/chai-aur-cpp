// 4. **Challenge 4: Switch Case**\
   Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.

#include<iostream>
using namespace std;

int main()
{
    int teaType;
    
    cout << "Select a brewing method:" << endl;
    cout << "1. Boiling" << endl;
    cout << "2. Steeping" << endl;
    cout << "3. Eced Tea" << endl;
    cout << "Enter your choice (1-3): " << endl;
    cin >> teaType;

    switch (teaType)
    {
    case 1:
    // copy pasting these from chatgpt
        cout << "\nBoiling Method Instructions:\n";
        cout << "- Bring water to a boil.\n";
        cout << "- Add tea leaves or tea bag.\n";
        cout << "- Boil for 3-5 minutes.\n";
        cout << "- Strain and serve hot.\n";
        break;
    case 2:
        cout << "\nSteeping Method Instructions:\n";
        cout << "- Heat water to the desired temperature.\n";
        cout << "- Pour hot water over tea bag or leaves in a cup.\n";
        cout << "- Let it steep for 3-5 minutes.\n";
        cout << "- Remove the tea and enjoy.\n";
        break;
    case 3:
        cout << "\nIced Tea Method Instructions:\n";
        cout << "- Brew tea using the steeping or boiling method.\n";
        cout << "- Let it cool to room temperature.\n";
        cout << "- Add ice and refrigerate.\n";
        cout << "- Serve chilled with lemon or mint if desired.\n";
        break;
    
    default:
        cout << "Invalid Choice! Please select 1, 2, or 3" << endl;
        break;
    }

    return 0;
}