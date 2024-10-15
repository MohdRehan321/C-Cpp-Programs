#include<stdio.h>
int main()
{
    int *ptr;
    ptr= (int*) malloc(sizeof(int));
    printf("enter ptr ");
    scanf("%d",ptr);
    printf("before free %d\n",*ptr);
    free (ptr);
    printf("after free %d",*ptr);
    return 0;
}
