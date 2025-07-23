#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text2.txt","r");
    int num;
    if(ptr == NULL){
        printf("SORRY! FILE NOT FOUND");
    }
    else{
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
    }
    fclose(ptr);

    return 0;
}