#include<stdio.h>

int maior(int a, int b, int *pa, int *pb){
    int End_maior;
    if(pa > pb){
        End_maior = a;
    }
    else{
        End_maior = b;
    }
    printf("%d %d\n", pa, pb);
    return End_maior;
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    printf("%d" , maior(a, b, pa, pb));

    return 0;
}