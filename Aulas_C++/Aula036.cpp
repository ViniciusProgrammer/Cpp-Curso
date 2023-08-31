#include <iostream>
#define MAX 10

using namespace std;

int main() {
    int vet[MAX] = {9, 15, 2, 99, 56, 12, 28, 5, 61, 78}, aux, n = 10, ultimo;
    ultimo = n - 1;
    bool troca;

    do{
        troca = false;

        for(int j = 0; j < ultimo; j++) {
            
            if(vet[j] > vet[j + 1]){
                troca = true;

                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    
        ultimo--;

    }while(troca == true);

    for(int l = 0; l < n; l++) {
        cout << vet[l] << " ";
    }

    return 0;
}