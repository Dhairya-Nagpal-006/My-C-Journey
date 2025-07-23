#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("VALUE OF NUM IS %d\n",num);
    fclose(ptr);
    return 0;
}