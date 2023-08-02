#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*
Aula028: Alocação dinâmica de méenória
*/

using namespace std;

int main(){

    char *frase;

    frase = (char *) malloc(sizeof(char));

    gets(frase);

    cout << frase << endl;
    
    return 0;
}