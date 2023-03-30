#include <stdio.h>
#define N 30
int main(){
    int i,k,suma=0;
    int x[N];
    srand( time( NULL ) );
    for(i=0;i<15;i++){
        do{
        printf("Podaj element x[%d]: ",i);
        k = scanf("%d",&x[i]);
        fflush(stdin);
        }while(k==0);
    }
    for(i=15;i<30;i++){
        x[i]=rand() % 50;
    }
    int iloscParzystych = 0;
    for (i = 0; i < 30; i++) {
        if (x[i] % 2 == 0) {
        iloscParzystych++;
    }
    }
    int y[iloscParzystych];
    int j = 0;
    for (i = 0; i < 30; i++) {
        if (x[i] % 2 == 0) {
            y[j] = x[i];
            j++;
    }
    }
    for(i=0;i<iloscParzystych;i++){
        if(i==0) printf("\n{%d,",y[i]);
        if(i>0&&i<iloscParzystych-1) printf("%d,",y[i]);
        if(i==iloscParzystych-1) printf("%d}",y[i]);
    }
    for(i=0;i<30;i++){
        if(i==0) printf("\n{%d,",x[i]);
        if(i>0&&i<29) printf("%d,",x[i]);
        if(i==29) printf("%d}",x[i]);
    }
    
    for(i=0;i<iloscParzystych;i++){
    suma = suma + y[i]*y[i];
    if(i==iloscParzystych-1) printf("\nSuma = %d",suma);
        
	}

	getchar();
    return 0;
}

