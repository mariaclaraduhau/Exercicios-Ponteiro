#include<stdio.h>

void ParteInt_Frac(double *p, int *p_int, double *p_frac){
    *p_int = (int)*p;
    *p_frac = *p - *p_int;
}
    
int main(){
    double p_valor, frac; 
    double *p = &p_valor, *p_frac = &frac;
    int inteiro;
    int *p_int = &inteiro;
    scanf("%lf", p);
    ParteInt_Frac(p, p_int, p_frac);
    printf("Parte Inteira: %d\n", inteiro);
    printf("Parte Fracionaria: %.2lf\n", frac);

    return 0;
}
