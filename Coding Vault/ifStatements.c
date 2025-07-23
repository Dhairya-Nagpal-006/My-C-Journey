//EVERY NON ZERO VALUE IS TRUE IN C LANGUAGE
#include <stdio.h>

int main(){
   if (1){
    printf("THIS IS EXECUTED \n");
   }
   if (12345){
    printf("THIS IS ALSO EXECUTED \n");
   }
   if (55555){
    printf("THIS IS ALSO EXECUTED \n");
   }
   if ('A'){
    printf("THIS IS ALSO EXECUTED \n");
   }
   if (13.14){
    printf("THIS IS EXECUTED \n");
   }
   if (0){
    printf("THIS WILL NOT BE EXECUTED \n");
   }
    return 0;
}