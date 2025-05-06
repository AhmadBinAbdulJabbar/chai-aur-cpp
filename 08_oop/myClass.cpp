#include<iostream>
#include<vector>
using namespace std;

class Chai 
{
    // data members (attributes)
    public: // by default it is private
        string teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // member function

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingredient : ingredients){
                cout << ingredient << ",     "; 
            } 
            cout << endl;
        }

    private:
        string name;
};



int main()
{
    Chai chai; // used in java
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};
    
    chaiOne.displayChaiDetails();


    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
}