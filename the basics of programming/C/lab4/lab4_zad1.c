#include <stdio.h>

int main()
{

	int pojSala1 = 100, pojSala2 = 60, pojSala3 = 50;
	int liczbaOsSala1, liczbaOsSala2, liczbaOsSala3;
	int k, stanSala1,stanSala2,stanSala3;
	do{
		printf("\nPodaj liczbe osob w sali nr.1: ");
		k = scanf("%d",&liczbaOsSala1);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&liczbaOsSala1<0) printf("\nIlosc osob nie moze byc ujemna");
		fflush(stdin);
	}while(k==0||liczbaOsSala1<0);
	do{
		printf("\nPodaj liczbe osob w sali nr.2: ");
		k = scanf("%d",&liczbaOsSala2);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&liczbaOsSala2<0) printf("\nIlosc osob nie moze byc ujemna");
		fflush(stdin);
	}while(k==0||liczbaOsSala2<0);
	do{
		printf("\nPodaj liczbe osob w sali nr.3: ");
		k = scanf("%d",&liczbaOsSala3);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&liczbaOsSala3<0) printf("\nIlosc osob nie moze byc ujemna");
		fflush(stdin);
	}while(k==0||liczbaOsSala3<0);
	
	stanSala1 = pojSala1 - liczbaOsSala1;
	stanSala2 = pojSala2 - liczbaOsSala2;
	stanSala3 = pojSala3 - liczbaOsSala3;
	
	if(stanSala1<0)
	{
		stanSala1 = -stanSala1;
		printf("\nZ pokoju nr1 musi wyjsc %d osob ",stanSala1);
		stanSala1 = -stanSala1;
	}
	if(stanSala1>0)
	{
		printf("\nDo pokoju nr 1 moze wejsc jeszcze %d osob ",stanSala1);
	}
	if(stanSala1==0)
	{
		printf("\nw pokoju nr1 jest maksymalna liczba osob ");
	}
	
	if(stanSala2<0){
		stanSala2 = -stanSala2;
		printf("\nZ pokoju nr2 musi wyjsc %d osob ",stanSala2);
		stanSala2 = -stanSala2;
	}
	if(stanSala2>0){
		printf("\nDo pokoju nr2 moze wejsc jeszcze %d osob ",stanSala2);
	}
	if(stanSala2==0){
		printf("\nw pokoju nr2 jest maksymalna liczba osob ");
	}
	
	if(stanSala3<0){
		stanSala3 = -stanSala3;
		printf("\nZ pokoju nr3 musi wyjsc %d osob ",stanSala3);
		stanSala3 = -stanSala3;
	}
	if(stanSala3>0){
		printf("\nDo pokoju nr3 moze wejsc jeszcze %d osob ",stanSala3);
	}
	if(stanSala3==0){
		printf("\nw pokoju nr3 jest maksymalna liczba osob ");
	}
	
	
	getchar();
	return 0;
}
