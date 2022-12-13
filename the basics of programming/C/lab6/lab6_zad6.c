//6. Korzystając z dwóch pętli for napisać program wyświetlający podany prostokąt o zadanej
//liczbie wierszy oraz punktów w wierszu, np. lw=4, pw=4.
//X y x y
//y x y x
//x y x y
//y x y x

#include <stdio.h>

int main()
{
    int lw, pw, i, j;

    do
    {
        printf("Podaj liczbe wierszy: ");
        scanf("%d", &lw);
        if(lw<=0) printf("Podano niepoprawna wartosc\n");
    } while (lw<=0);

    do
    {
        printf("Podaj liczbe punktow w wierszu: ");
        scanf("%d", &pw);
        if(pw<=0) printf("Podano niepoprawna wartosc\n");
    } while (pw<=0);

    for(i=0; i<lw; i++)
    {
        for(j=0; j<pw; j++)
        {
            if((i+j)%2==0) printf("X");
            else printf("Y");
            if(j==pw-1) printf("\n");
            else printf(" ");
        }
    }
    getchar();
    return 0;
}