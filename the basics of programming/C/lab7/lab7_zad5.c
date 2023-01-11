//5. Napisać program sprawdzający czy dana liczba naturalna <1000, jest liczbą Armstronga. Liczba
//Armstronga to liczba równa sumie trzecich potęg swoich cyfr

#include <stdio.h>
#include <math.h>

int main(){
    int liczbaArm,i,j=0,x,c=100,sumaPoteg=0,liczbaArmZapasowa;;
    int liczbaCyfr[3];
    do{
        printf("Podaj liczbe: ");
        scanf("%d",&liczbaArm);
        fflush(stdin);
    }while(liczbaArm<=0||liczbaArm>999);

    printf("Liczba arm = %d\n",liczbaArm);
    liczbaArmZapasowa = liczbaArm;
    for(i=0;i<3;i++){
        liczbaCyfr[i] = (liczbaArm - liczbaArm%c)/c;
        liczbaArm = liczbaArm - liczbaCyfr[i]*c;
        c = c/10;
        printf("LiczbaCyfr[%d]=%d\n",i,liczbaCyfr[i]);
    }
    for (i = 0; i < 3; i++){
        sumaPoteg = sumaPoteg+ pow(liczbaCyfr[i],3);
    }
    printf("suma poteg = %d\n",sumaPoteg);

    if (sumaPoteg == liczbaArmZapasowa)
        printf("Podana liczba jest liczba Armstronga");
    else
        printf("Podana liczba nie jest liczba Armstronga");

    
}