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
   
    
    for(i=1; lw>=i;i++)
    {
        for(j=0; j<i;j++)
        {   
            if(j==0&&i==1) printf("X\n");
            else 
            {
                if(j!=i-1) printf("X ");
                else if(j==i-1) printf("Y\n");
            }
        }
    }


    getchar();
    return 0;
}