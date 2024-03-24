//Crie um programa que contenha um array de float contendo 10 elementos. 
//Imprima o endereço de cada posição do array
#include<bits/stdc++.h>
using namespace std;

int main(){
    float vet[10];
    float *p = vet;
    for(int i=0; i<10; i++){
        printf("%d\n", p);
        p++;
    }
    return 0;
}