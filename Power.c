#include<stdio.h>
int main()
{
    int b,p,r;
    printf("enter base value");
    scanf("%d",&b);
    printf("\n enter power value");
    scanf("%d",&p);
    r=power(b,p);
    printf("result is %d",r);
    return 0;
}
int power(int b,int p)
{
    if(p==0)
        return 1;
    return b*power(b,p-1);
}
