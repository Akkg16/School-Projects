//3. Wczytaæ zmienne x,y,z (ograniczyæ ich wartoœci do 0 i 1) , nastêpnie obliczyæ wartoœæ
//wyra¿enia (funkcji logicznej) x&&y||z dla wszystkich mo¿liwych kombinacji zmiennych x, y, z.

#include<stdio.h>


int main()
{
	double x,y,z,wynik;
	int k,i;
	for(i=0;i<8;i++)
	{
		do	
		{
			printf("\nPodaj x: ");
			k = scanf("%lf",&x);
			if(k==0||(x!=1&&x!=0)) printf("\nBlad formatu");
			fflush(stdin);
		}while(k==0||(x!=1&&x!=0));
		
		do	
		{
			printf("\nPodaj y: ");
			k = scanf("%lf",&y);
			if(k==0||(y!=1&&y!=0)) printf("\nBlad formatu");
			fflush(stdin);
		}while(k==0||(y!=1&&y!=0));
		
		do	
		{
			printf("\nPodaj z: ");
			k = scanf("%lf",&z);
			if(k==0||(z!=1&&z!=0)) printf("\nBlad formatu");
			fflush(stdin);
		}while(k==0||(z!=1&&z!=0));
		printf("\nwynik=x&&y||z = %lf",wynik=x&&y||z);
	}
		
	getchar();
	return 0;
}
