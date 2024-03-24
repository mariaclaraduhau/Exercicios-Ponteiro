#include<stdio.h>

int ParteInt(double *p){
    int p_inteiro = (int)*p;
    return p_inteiro;
}

double Fracionaria(double *p){
    double frac = *p - ParteInt(p);
    return frac;
}

int main(){
    double p_valor;
    double *p = &p_valor;
    scanf("%lf", p);
    int p_int = ParteInt(p);
    printf("Parte Inteira: %d\n", p_int);
    double p_frac = Fracionaria(p);
    printf("Parte Fracionaria: %.2lf\n", p_frac);

    return 0;
}
