#include <stdio.h>
#include <math.h>

int main()
{
	int n,k,licznik=0,i;
	
	do{
		printf("\nPodaj liczbe powtorzen: ");
		k = scanf("%d",&n);
		if(k==0) printf("Blad formatu");
		if(k==1&&n<=0) printf("N nie moze byc ujemne");
		fflush(stdin);
	}while(k==0||n<=0);
	printf("n=%d",n);
	
	
		double x,y,z,mian1,mian2,mian3,mian4,wynik;
	for(i=0;licznik<n;i++)
	{
	
		do{
			printf("\nPodaj x: ");
			k = scanf("%lf",&x);
			if(k==0) printf("Blad formatu");
			fflush(stdin);
		}while(k==0);
		
		do{
			printf("\nPodaj y: ");
			k = scanf("%lf",&y);
			if(k==0) printf("Blad formatu");
			fflush(stdin);
		}while(k==0);
	
		do{
			printf("\nPodaj z: ");
			k = scanf("%lf",&z);
			if(k==0) printf("Blad formatu");
			fflush(stdin);
		}while(k==0);
		
		
		mian1 = y-fabs(x*x*x);
		printf("\nMian1 = %lf",mian1);
		if(mian1==0){
			printf("dzielenie przez 0");
			getchar();
			continue;
		}
		
		mian2 = x+(y/mian1);
		printf("\nMian2 = %lf",mian2);
		if(mian2==0){
			printf("\ndzielenie przez 0");
			getchar();
			continue;
		}
		mian3 = z-5;
		printf("\nMian3 = %lf",mian3);
		if(mian3==0){
			printf("\ndzielenie przez 0");
			getchar();
			continue;
		}
		mian4 = (y/mian3)+(x/mian2);
		printf("\nMian4 = %lf",mian4);
		if(mian4==0){
			printf("\ndzielenie przez 0");
			getchar();
			continue;
		}
		wynik = 1/mian4;
		printf("\nwynik to %lf",wynik);
		licznik = licznik + 1;
	}
	
	
}
