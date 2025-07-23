int change(int a ){
    a =77;
    return 0;

}
#include <stdio.h>
int main() {
    int b =22;
    change(b);
    printf("The value of b is %d\n", b);
    return 0;
}
