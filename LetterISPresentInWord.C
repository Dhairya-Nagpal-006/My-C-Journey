#include <stdio.h>
#include <strings.h>
int main() {
    int x=0;
    int i =0;
    char d[] = "DHAIRYA";
    char a = 'z';
    for(int i=0;i<strlen(d);i++){
        if(d[i] == a ){
            x=1;
        }
    }
    if(x){
        printf("CONTAINS");
    }
    else{
        printf("NOT FOUND!!!");
    }

    return 0;
}