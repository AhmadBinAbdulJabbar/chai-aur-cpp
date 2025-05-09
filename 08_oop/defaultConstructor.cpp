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

        // default constructor
        Chai(){
            cout << "Constructor called" << endl;
            teaName = "Unknow Tea";
            servings = 1;
            ingredients = {"water", "Tea leaves"};
        }


        // member function

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingredient : ingredients){
                cout << ingredient << " "; 
            } 
            cout << endl;
        }

};



int main()
{
    Chai defaultChai;

    defaultChai.displayChaiDetails();
    
    return 0;
}