#include <iostream>

using namespace std;

int main(){
    int i, vet[10];
    int* p;
    p = vet;

    // Lendo valores

    for(i = 0; i < 10; i++){
        cin >> vet[i];
    }

    //Imprimindo os endereços de memória 
    for(i = 0; i < 10; i++){
        cout << "Endereco de menmoria = " << (p + i)  << endl;
    }

    cout << endl;

    //Imprimindo os valores
    for(i = 0; i < 10; i++){
        if(i < 9){
            cout << *(p + i) << ",";
        }
        else{
            cout << *(p + i);
        }
    }

    cout << endl << endl;

    return 0;
}