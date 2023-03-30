#include <stdio.h>
int main(void){
    int i;
    double tab[5];
    for(i=0;i<5;i++){
        printf("\nPodaj tab[%d]: ",i);
        scanf("%lf",&tab[i]);
    }
    for(i=0;i<5;i++){
        printf(" %lf",tab[i]);
    }
    
}