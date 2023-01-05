//2. Napisać program, który wydrukuje napis 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n i następnie obliczy
//sumę n składników oraz sumę składników taką, aby ostatni sumowany składnik był większy od
//zadanej liczby ε.


#include <stdio.h>

int main(void){
    double i,j;
    double n,e,suma1=0,suma2=0;
    printf("\n1 + 1/2 + 1/3 + 1/4 + 1/5 ... + 1/n ");
    printf("Podaj n aby obliczyc: ");
    scanf("%lf",&n);

    printf("Podaj liczbe e: ");
    scanf("%lf",&e);
    
    for(i=0;i<n;i++){
        suma1 = suma1 + (1/(i+1));
    }
    printf("Suma n elementow to: %lf\n",suma1);

    do{
        suma2 = suma2 + (1/(i+1));
        printf("Suma = %lf\n",suma2);
        i = i +1;
    }while((1/i+1)<e);
    printf("Suma 1/n elementu mniejszego od e jest rowna: %lf\n",suma2);
    getchar();
    return 0;
}