#include<stdio.h>

void maior(int *pa, int *pb, int *end_maior){
    if(pa > pb){
        *end_maior = *pa;
    }
    else{
        *end_maior = *pb;
    }
}

int main(){
    int a, b, endereco;
    scanf("%d %d", &a, &b);
    maior(&a, &b, &endereco);
    printf("A variavel de maior endereco eh: %d", endereco);

    return 0;
}
