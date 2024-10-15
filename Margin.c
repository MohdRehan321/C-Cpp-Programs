#include<stdio.h>
int  main()
{
    int sp,cp,p,l,q;
    printf("enter selling price ");
    scanf("%d",&sp);
    printf("enter cost price ");
    scanf("%d",&cp);
    if(sp>cp)
    {
        p=sp-cp/cp;
        q=p*100;
        printf("profit is %d",q);
    }
    else
    {
        if(sp<cp)
            l=((cp-sp)/cp)*100;
            printf("loss is %d",l);
    }
    return 0;

}


