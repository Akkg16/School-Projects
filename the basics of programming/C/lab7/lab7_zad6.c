#include <stdio.h>
#include <math.h>

int main(){
    double x,n,licznikE=0,mianE=1,licznikSin=0,mianSin=1,eX=1,sinX=0,wyzn=1,powSin=0,silniaSin=1;
    int k,i,j=0,z=3;

    do{
        printf("Podaj x: ");
        k = scanf("%lf",&x);
        fflush(stdin);
    }while(k==0);

    do{
        printf("Podaj n: ");
        k = scanf("%lf",&n);
        fflush(stdin);
    }while(k==0);

    for(i=1;i<=n;i++){
        licznikE = licznikE+pow(x,i);
        mianE = mianE * i;
        eX = eX + (licznikE/mianE);
        licznikE = 0;
    }

    for(i=0;i<n;i++){
        wyzn = pow(-1,i);
        powSin = (2*i)+1;
        licznikSin = pow(x,powSin);
        for(j=1;j<=(1+(i*2));j++){
            silniaSin = silniaSin * j;
        }
        mianSin = silniaSin;
        sinX = sinX + (licznikSin/mianSin)*wyzn;
        printf("sinX = %lf\n",sinX);
        silniaSin = 1;
    }
    

    printf("eX z kalkulatora mojego = %lf\n",eX);
    printf("eX z kalkulatora Math.h = %lf\n",exp(x));
    printf("SinX z kalkulatora mojego = %lf\n",sinX);
    printf("SinX z kalkulatora Math.h = %lf\n",sin(x));
    
}