//1. Wczytaæ dwie zmienne a, b typu unsigned int z zabezpieczeniem formatu, obliczyæ i
//wydrukowaæ wartoœci nastêpuj¹cych wyra¿eñ relacyjnych a>b, a>=b, a<b,a<=b, a==b, a!=b .
//Wydrukowaæ te¿ informacjê czy reprezentuj¹ wartoœæ logiczn¹ prawda czy te¿ fa³sz. 

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
