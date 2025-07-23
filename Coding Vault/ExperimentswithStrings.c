#include <stdio.h>
#include <strings.h>
int main() {
    int X=0;
    int i =0;
    char d[] = "DHAIRYA";
    char a = 'A';
    for(int i=0;i<strlen(d);i++){
        if(d[i] == a ){
            X++;
        }
    }
    printf("%d",X);

    return 0;
}