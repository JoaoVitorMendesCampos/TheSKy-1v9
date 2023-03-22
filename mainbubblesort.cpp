#include <iostream>
#include <windows.h>
 
using namespace std;

void imprimevet(int v[], int tam){
    for(int i = 0 ; i < tam ;i++){
        cout << v[i] << " ";
    }
    cout << endl << endl;
}
 
void BubbleSortCres(int Lista[], int tamanho){

    int aux, troca, cont = 0;

    for (int i = 0; i < tamanho - 1; i++){
        troca = 0;
        for (int j = 1; j < tamanho - i; j++){
            if (Lista[j] < Lista[j - 1]){
                aux = Lista[j];
                Lista[j] = Lista[j - 1];
                Lista[j - 1] = aux;
                troca = 1;
                cont++;
            }
        }
        if(troca == 0){
            break;
        }
    }
    imprimevet(Lista, tamanho);
    cout << "trocas realizadas " << cont << endl;
}

void BubbleSortDec(int Lista[], int tamanho){

    int aux, troca, cont = 0;

    for (int i = 0; i < tamanho - 1; i++){
        troca = 0;
        for (int j = 1; j < tamanho - i; j++){
            if (Lista[j] > Lista[j - 1]){
                aux = Lista[j];
                Lista[j] = Lista[j - 1];
                Lista[j - 1] = aux;
                troca = 1;
                cont++;

            }
        }
        if(troca == 0){
            break;
        }
    }
    imprimevet(Lista, tamanho);
    cout << "trocas realizadas " << cont << endl;
}

int main() {

    int idd[10] = {8, 10, 5, 6, 7, 0 , 4};
    cout << "Normal " << endl;
    imprimevet(idd, 10);
    cout << "\nDec" << endl;
    BubbleSortDec(idd,10);
    cout << "\nCres" << endl;
    BubbleSortCres(idd, 10);

}