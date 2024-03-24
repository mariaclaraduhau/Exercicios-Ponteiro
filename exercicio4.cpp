//Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
#include<bits/stdc++.h>
using namespace std;
void calcula(double r, double *a, double *v){
    double pi = 3.14;
    *a = 4*pi*(r*r);
    *v = (4*pi*pow(r,3))/3;
}
int main(){
    double raio, area, volume;
    cin >> raio;
    calcula(raio, &area, &volume);
    printf("Area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);
    return 0;
}