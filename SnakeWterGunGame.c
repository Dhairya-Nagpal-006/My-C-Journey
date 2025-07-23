#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int c, p;
    srand(time(0));
    c = rand() % 3;

    printf("CHOOSE 0/1/2 : {0 -> SNAKE, 1 -> WATER, 2 -> GUN}\n");
    scanf("%d", &p);

    if (p < 0 || p > 2)
    {
        printf("INVALID INPUT, TRY AGAIN!!!\n");
        return 1;
    }
    if (c == 0)
    {
        printf("COMPUTER CHOSE SNAKE\n");
    }
    else if (c == 1)
    {
        printf("COMPUTER CHOSE WATER\n");
    }
    else {
        printf("COMPUTER CHOSE GUN\n");
    }

    if (p == c)
    {
        printf("TIE\n");
    }
    else if ((p == 0 && c == 1) || (p == 1 && c == 2) || (p == 2 && c == 0))
    {
        printf("HURRAY YOU WON\n");
    }
    else
    {
        printf("SORRY YOU LOST\n");
    }

    return 0;
}
