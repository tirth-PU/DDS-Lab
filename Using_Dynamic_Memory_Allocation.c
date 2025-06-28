// Using Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
void main() {
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 48;
    printf("\n %d", *p);
    *p += 10;
    printf("\n %d", *p);
    (*p)++;
    printf("\n %d", *p);
    free(p)
    p = NULL;
}