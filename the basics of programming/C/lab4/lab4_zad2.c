#include <stdio.h>

int main()
{
	int aktWyn, aktMiesiac, miesiacPodwWyn, wynPodw, kwotwaWyr,iloscMiesDoTylu;
	int k;
	do{
		printf("\nPodaj aktualna pensje: ");
		k = scanf("%d",&aktWyn);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&aktWyn<0) printf("\nWynagrodzenie nie moze byc ujemna");
		fflush(stdin);
	}while(k==0||aktWyn<0);
	
	do{
		printf("\nPodaj aktualny miesiac: ");
		k = scanf("%d",&aktMiesiac);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&aktMiesiac<0) printf("\nMiesiac nie moze byc ujemny");
		if(k==1&&aktMiesiac>12) printf("\nPodaj prawidlowy miesiac");
		if(aktMiesiac==0) printf("Miesiac nie moze byc zerem");
		fflush(stdin);
	}while(k==0||aktMiesiac<0||aktMiesiac>12||aktMiesiac==0);

	
	do{
		printf("\nPodaj miesiac od ktorego obowiazuje podwyzka: ");
		k = scanf("%d",&miesiacPodwWyn);
		if(k==0) printf("\nBlad formatu");
		if(k==1&&miesiacPodwWyn<0) printf("\nMiesiac nie moze byc ujemny");
		if(k==1&&miesiacPodwWyn>12) printf("\nPodaj prawidlowy miesiac");
		if(miesiacPodwWyn==0) printf("Miesiac nie moze byc zerem");
		fflush(stdin);
	}while(k==0||miesiacPodwWyn<0||miesiacPodwWyn>12||miesiacPodwWyn==0);
	
	wynPodw = aktWyn*1.076;
	iloscMiesDoTylu = miesiacPodwWyn - aktMiesiac;
	kwotwaWyr = aktWyn*0.076*iloscMiesDoTylu;
	printf("\nWynagrodzenie po podwyzce to %d",wynPodw);
	printf("\nDoplata wynosi %d",kwotwaWyr);
	//3000
	//1 miesiac 10 mieisac od 7 mieisaca ma wyjsc 600zl doplaty
}
