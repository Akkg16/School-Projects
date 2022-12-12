#include <stdio.h>
int main()
{
	double przychod, kosztaUzyskania, dochod, skladkaZUS, dochodPoOdlZUS, skladkaZdrow, podatekNalezny, podatekMinusSkladZdrow,roznica,podatekDoZaplaty,nadplata;
	int zaliczkaPodatek, podatekNaleznyZaokr;
	printf("\nPodaj swoj przychod: ");
	scanf("%lf", &przychod);
	printf("\nPodaj koszty uzyskania przychodu: ");
	scanf("%lf",&kosztaUzyskania);
	dochod = przychod - kosztaUzyskania;
	printf("\nTwoj dochod to: %lf",dochod);
	printf("\nPodaj swoj skladke ZUS: ");
	scanf("%lf", &skladkaZUS);
	dochodPoOdlZUS = dochod - skladkaZUS;
	printf("\nTwoj dochod po odlicznieu ZUS to: %lf",dochodPoOdlZUS);
	printf("\nPodaj swoja skladka zdrowotna: ");
	scanf("%lf", &skladkaZdrow);
	if(dochodPoOdlZUS<=85528) podatekNalezny = 0.18 * dochodPoOdlZUS - 556.02;
	else
	podatekNalezny = 14839.02 + (dochodPoOdlZUS - 85528)*0.32;
	printf("\nTwoj podatek to: %lf",podatekNalezny);
	podatekMinusSkladZdrow = podatekNalezny - skladkaZdrow;
	printf("\nTwoj podatek po odliczeniu skladki zdrowotnej to: %lf",podatekMinusSkladZdrow);
	printf("\nPodaj swoj zaliczke na podatek dochodowy: ");
	scanf("%d", &zaliczkaPodatek);
	podatekNalezny = podatekMinusSkladZdrow - zaliczkaPodatek;
	printf("\nTwoj podatek po odliczeniu skladki zdrowotnej i zaliczki to: %lf",podatekNalezny);
	podatekNaleznyZaokr = podatekNalezny;
	roznica = podatekNalezny - podatekNaleznyZaokr;
	if(roznica>=0.5) podatekNalezny = podatekNaleznyZaokr + 1;
	else
	{
	podatekNalezny = podatekNaleznyZaokr;
	}
	printf("\nTwoj podatek nalezny wynosi: %lf",podatekNalezny);
	if(podatekNalezny>zaliczkaPodatek) 
	{
		podatekDoZaplaty = podatekNalezny - zaliczkaPodatek;
		printf("\nPodatek do zaplacenia wynosi: %lf",podatekDoZaplaty);
	}
	else{
		nadplata = zaliczkaPodatek - podatekNalezny;
		printf("\nNadplata do zwrotu: %lf",nadplata);
	}
	getchar();
	return 0;
}

