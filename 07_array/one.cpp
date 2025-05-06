#include<iostream>
using namespace std;

int main()
{
    int chaiTempareture[5] = {85, 90, 88, 92, 89};

    cout << "Chai temperature: ";
    for(int i = 0; i < 5; i++){
        cout << chaiTempareture[i] << " degree C \n";
    }
  

    return 0;
}