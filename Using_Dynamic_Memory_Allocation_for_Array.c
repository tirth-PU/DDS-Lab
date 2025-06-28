// Using Dynamic Memory Allocation for Array
#include<stdio.h>
#include<stdlib.h>
void main() {
    int *p, index, *q;
    p = (int *) malloc(sizeof(int[5]));
    q = (int *) malloc(sizeof(int));
    for (index = 0; index < 5; index++) {
        printf("Enter a value :");
        scanf("%d", (p + index));
    }
    printf("\n Given values are");
    *q = 0;
    for (index = 0; index < 5; index++) {
        *q = *q + *(p + index);
        printf("\n %d", *(p + index));
    }
    printf("\n Total is %d", *q);
    free(p);
    p = Null;
}