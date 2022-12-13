//5. Napisać program inicjalizujący generator liczb pseudolosowych przy zastosowaniu funkcji
// srand(), następnie generujący przy użyciu funkcji rand( ) 6 liczb pseudolosowych i
//następnie 10 liczb pseudolosowych z zakresu (1,49) (należy włączyć plik nagłówkowy
//stdlib.h)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    srand(time(NULL));
    for(i=0; i<6; i++)
    {
        printf("%d\n", rand());
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n", rand()%49+1);
    }
    getchar();
    return 0;  
}