#include <iostream>

/*
Aula027: Ponteeiros utilizando funções (PARTE 3)
*/
using namespace std;

void somar(int* var, int adc){

    *var += adc;
}

void vet(int *vt){
    vt[0] = 1;
    vt[1] = 2;
    vt[2] = 3;
    vt[3] = 4;
    vt[4] = 5;
}

int main(){

    int num, vetor[3];

    num = 0;

    cout << num << endl;

    somar(&num, 20);

    cout << num << endl << endl;

    vet(vetor);

    for(int j = 0; j < 3; j++){
        cout << vetor[j] << endl;
    }

    return 0;
}