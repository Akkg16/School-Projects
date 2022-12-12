#include<stdio.h>
int main()
{
 int x,y,licz,mian,wynik;
 printf("\n Podaj x: ");
 scanf("%d",&x);
 printf("\n Podaj y: ");
 scanf("%d",&y);
 licz = (x*x)+(x/y)+(x%5);
 mian = (x/(x+y))+(y*y*y);
 wynik = licz/mian;
 printf("\n Wynik to %d",wynik);
 getchar();
 return 0;
}
