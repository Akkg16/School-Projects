//1. Wczyta� dwie zmienne a, b typu unsigned int z zabezpieczeniem formatu, obliczy� i
//wydrukowa� warto�ci nast�puj�cych wyra�e� relacyjnych a>b, a>=b, a<b,a<=b, a==b, a!=b .
//Wydrukowa� te� informacj� czy reprezentuj� warto�� logiczn� prawda czy te� fa�sz. 

#include<stdio.h>


int main(){
	unsigned int a,b;
	int k;
	do
	{
		printf("Podaj a: ");
		k = scanf("%u",&a);
		if(k==0) printf("Blad formatu");
		fflush(stdin);
	}while(k==0);
	
	do
	{
		printf("Podaj b: ");
		k = scanf("%u",&b);
		if(k==0) printf("Blad formatu");
		fflush(stdin);
	}while(k==0);
	
	printf("\na>b = %u",a>b);
	if(a>b==1) printf("  Prawda");
	if(a>b==0) printf("  Falsz");
	printf("\na>=b = %u",a>=b);
	if(a>=b==1) printf("  Prawda");
	if(a>=b==0) printf("  Falsz");
	printf("\na<b = %u",a<b);
	if(a<b==1) printf("  Prawda");
	if(a<b==0) printf("  Falsz");
	printf("\na<=b = %u",a<=b);
	if(a<=b==1) printf("  Prawda");
	if(a<=b==0) printf("  Falsz");
	printf("\na==b = %u",a==b);
	if(a==b==1) printf("  Prawda");
	if(a==b==0) printf("  Falsz");
	printf("\na!=b= %u",a!=b);
	if(a!=b==1) printf("  Prawda");
	if(a!=b==0) printf("  Falsz");
	getchar();
	return 0;
}
