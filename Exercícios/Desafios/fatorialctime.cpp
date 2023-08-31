#include <iostream>
#include <ctime> 
#include <fstream>

using namespace std;

int fatIterativo(int x) {
    int fat = 1;

    for(int i = 1; i <= x; i++) {
        fat *= i;
    }
    return fat;
}

int fatRecursivo(int p) {
    if(p == 1) {
        return 1;
    }
    else {
        return p * fatRecursivo(p - 1);
    }
}

int main() {

    ofstream outputFile("times.txt");

    for (int i = 5; i < 100; i++) {
         clock_t inicio = clock();  
         fatIterativo(i);
         
        clock_t fim = clock(); 
        double time_interativa = static_cast<double>(fim - inicio) / CLOCKS_PER_SEC;

        clock_t inicio_recursiva = clock();

        fatRecursivo(i);
        clock_t fim_recursiva = clock();

        double time_recursiva = static_cast<double>(fim_recursiva - inicio_recursiva) / CLOCKS_PER_SEC;

        outputFile << i << " " << time_interativa << " " << time_recursiva << "\n";
    }

    outputFile.close();

    return 0;
}
