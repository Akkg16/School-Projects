#include <stdio.h>

int main(void){
    int n,a,i;
    int tab[10];
    do{
        printf("Podaj liczbe, dla ktorej chcesz wyswietlic tabliczke mnozenia: ");
        scanf("%d",&a);
        if(a==0) printf("Blad formatu\n");
        fflush(stdin);
    }while(a<0||a>21);

    for(i=0;i<10;i++){
        tab[i] = a*(i+1);
        printf("%d * %d = %d\n",a,(i+1),tab[i]);
        
    }


    getchar();
    return 0;
}