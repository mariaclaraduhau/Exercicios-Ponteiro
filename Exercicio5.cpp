#include<stdio.h>
void min_max(int t, int *p_min, int *p_max, int min, int max){
    int v[t];
    for(int i = 0; i < t; i++){
        scanf("%d", &v[i]);
    } 
    min = v[0], max = v[0];
    for(int i=0; i<t; i++){
        if(v[i] <= min){
            *p_min = v[i];
        }
        if(v[i] >= max){
            *p_max = v[i];
        }
    }
}
int main(){
    int t, min, max;
    int *p_t = &t, *p_min = &min, *p_max = &max;

    scanf("%d", p_t);
    min_max(t, p_min, p_max, min, max);
    printf("O maior elemento do vetor e: %d\n", max);
    printf("O menor elemento do vetor e: %d\n", min);

    return 0;
}