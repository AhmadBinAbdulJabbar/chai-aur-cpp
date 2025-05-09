#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:

        Chai()
        {
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water", "tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingr)
        {
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        // getters
        string getTeaName(){
            return teaName;
        }

        int getServings()
        {
            // logic 
            return servings;
        }

        vector<string> getIngredients()
        {
            return ingredients;
        }

        // setters
        void setTeaName(string name)
        {   
            // logic
            teaName = name;
        }

        void setServings(int serve)
        {
            servings = serve;
        }

        void setIngredients(vector<string> ingr)
        {
            ingredients = ingr;
        }


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
    Chai chai;

    chai.setTeaName("Ginger Tea");
    
    return 0;
}