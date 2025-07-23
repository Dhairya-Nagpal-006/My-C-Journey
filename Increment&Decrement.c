#include <stdio.h>
int main(){
    int i = 5;
    printf("The value of i is %d\n",i); //normal value



    printf("The value of i is %d\n",i++);// normal value pr baad me increment hoga #post increment

    printf("The value of i is %d\n",++i);// normal value +1 pehle waala +1 abhi vaala #pre increment

    printf("The value of i is %d\n",i--);// decrement ho jaayegi pr print hone ke baad #post decrement

    printf("The value of i is %d\n",--i);// ek decrement pichle waala or ek ab waala #pre decrement

    printf("The value of i is %d\n",i+=3);
    printf("The value of i is %d\n",i-=3);
    printf("The value of i is %d\n",i*=3);
    printf("The value of i is %d\n",i/=3);

    return 0;
}