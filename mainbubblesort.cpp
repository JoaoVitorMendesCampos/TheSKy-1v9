#include <iostream>
#include <windows.h>
 
using namespace std;
 
void BubbleSort(int Lista[], int tamanho){

    int aux, troca;

    for (int i = 0; i < tamanho - 1; i++){
        troca = 0;
        for (int j = 1; j < tamanho - i; j++){
            if (Lista[j] < Lista[j - 1]){
                aux = Lista[j];
                Lista[j] = Lista[j - 1];
                Lista[j - 1] = aux;
                troca = 1;
            }
        }
        if(troca == 0){
            break;
        }
    }
}

int main() {
    int idd[10] = {8, 10, 5, 6, 7, 0 , 4};
}