#include <iostream>

/*
Aula006: Trabalhando com condicionais, IF, ELSE IF, ELSE.
*/

using namespace std;

int main(){

    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 << endl << num2 << endl;

    if(num1 > num2){
        cout << "Num1 eh maior" << endl;
    }
    else if(num1 < num2){
        cout << "Num2 eh maior" << endl;
    }
    else{
        cout << "Ambos os valores eh iguais" << endl;
    }

    return 0;
}