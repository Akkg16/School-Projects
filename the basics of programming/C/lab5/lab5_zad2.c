//2. Wczytaæ dwie zmienne a, b, c typu unsigned int z zabezpieczeniem formatu,, obliczyæ i
//wydrukowaæ wartoœci nastêpuj¹cych wyra¿eñ logicznych a&&b, a||b, !a, !b, !a&&b||a&&!b
//dla wszystkich kombinacji zmiennych a,b (wartoœci reprezentuj¹cych prawdê i fa³sz).
//Wydrukowaæ te¿ informacjê czy wartoœci poszczególnych wyra¿eñ reprezentuj¹ wartoœæ logiczn¹
//prawda czy te¿ fa³sz
#include<stdio.h>


int main()
{
	unsigned int a,b,c;
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
	
	printf("\na&&b = %u",a&&b);
	if(a&&b==1) printf("  Prawda");
	if(a&&b==0) printf("  Falsz");
	printf("\na||b = %u",a||b);
	if(a||b==1) printf("  Prawda");
	if(a||b==0) printf("  Falsz");
	printf("\n!a = %u",!a);
	if(!a==1) printf("  Prawda");
	if(!a==0) printf("  Falsz");
	printf("\n!b = %u",!b);
	if(!b==1) printf("  Prawda");
	if(!b==0) printf("  Falsz");
	printf("\n!a&&b||a&&!b = %u",!a&&b||a&&!b);
	if(!a&&b||a&&!b==1) printf("  Prawda");
	if(a>b==0) printf("  Falsz");
	getchar();
	return 0;
}
