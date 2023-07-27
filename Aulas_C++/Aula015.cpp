#include <iostream>

/*
Aula015: Trabalhando com funções recursivas
*/

using namespace std;

void contador(int n){
    if(n == 0){
        return;
    }

    else{
        cout << n << endl;
        contador(n - 1);
    }

}

int main(){
    int num;

    cin >> num;

    contador(num);

    return 0;
}