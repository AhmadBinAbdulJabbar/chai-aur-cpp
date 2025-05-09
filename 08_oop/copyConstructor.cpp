#include<iostream>
#include<vector>
using namespace std;

class Chai 
{
    // data members (attributes)
    public: // by default it is private
        string *teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // parameter constructor
        Chai(string name, int serve, vector<string> ingr){
            cout << "Parameter Constructor Called" << endl;
            teaName = new string(name);
            servings = serve;
            ingredients = ingr;
        }

        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "Copy constructor called" << endl;
        }
        // desturctor
        ~Chai(){
            delete teaName;
            cout << "Destructor called" << endl;
        }


        // member function

        void displayChaiDetails(){
            cout << "Tea Name: " << *teaName << endl;
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
    Chai lemonTea("Lemon Tea", 2, {"water", "lemon", "honey"});

    // lemonTea.displayChaiDetails();

    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea --------" << endl;
    lemonTea.displayChaiDetails();

    cout << "Copied Tea --------" << endl;
    copiedChai.displayChaiDetails();
    
    return 0;
}