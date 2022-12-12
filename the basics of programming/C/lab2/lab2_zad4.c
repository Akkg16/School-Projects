#include <stdio.h>
int main()
{
	int iloscLiczb, sumaD= 0, sumaU= 0, iloscZer= 0, liczba= 0, licznik= 0;
	printf("Ile liczb chcesz wczytac: ");
	scanf("%d",&iloscLiczb);
	do
	{
	printf("\nPodaj liczbe: ");
	scanf("%d",&liczba);
	if(liczba>0) sumaD = sumaD + liczba;
	if(liczba<0) sumaU = sumaU + liczba;
	if(liczba==0) iloscZer = iloscZer + 1;
	licznik = licznik + 1;
	printf("licznik: %d", licznik);
	}
	while(licznik<iloscLiczb);
	printf("\nSuma dodatnich: %d",sumaD);
	printf("\nSuma ujemnych: %d",sumaU);
	printf("\nSuma zer: %d",iloscZer);
	getchar();
	return 0;
	

}
