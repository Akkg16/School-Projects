//2. Wczyta� dwie zmienne a, b, c typu unsigned int z zabezpieczeniem formatu,, obliczy� i
//wydrukowa� warto�ci nast�puj�cych wyra�e� logicznych a&&b, a||b, !a, !b, !a&&b||a&&!b
//dla wszystkich kombinacji zmiennych a,b (warto�ci reprezentuj�cych prawd� i fa�sz).
//Wydrukowa� te� informacj� czy warto�ci poszczeg�lnych wyra�e� reprezentuj� warto�� logiczn�
//prawda czy te� fa�sz

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
