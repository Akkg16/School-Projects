#include<stdio.h>
int main()
{
 double liczbaM,liczbaC;
 printf("\n Podaj dlugosc odcinka w metrach: ");
 scanf("%lf",&liczbaM);
 printf("\n Podaj dlugosc odcinka w centymetrach: ");
 scanf("%lf",&liczbaC);
 printf("\n Suma tych odcinkow wyrazona w milimetrach to %lf",liczbaC*10+liczbaM*100);
 double numberY,numberFeet,numberInch;
 printf("\n Podaj dlugosc odcinka w yardach: ");
 scanf("%lf",&numberY);
 printf("\n Podaj dlugosc odcinka w stopach: ");
 scanf("%lf",&numberFeet);
 printf("\n Podaj dlugosc odcinka w calach: ");
 scanf("%lf",&numberInch);
 printf("\n Suma tych odcinkow wyrazona w calach to %lf",numberY*36.0100828232+12*numberFeet+numberInch);
 getchar();
 return 0;
}
