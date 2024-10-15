#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while(1){
    printf("\n\n##############################");
    printf("\n1.to check isosceles triangle\n");
    printf("2.to check right angle triangle\n");
    printf("3.to check equilateral triangle\n");
    printf("4. exit\n");

    printf("\nenter your  choice ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("enter length of 3 sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b||b==c||c==a)
            printf("isosceles");
            else
            printf("not an isosceles");
               break;
        case 2:
               printf("enter length of 3 sides of triangle\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
               printf("right triangle");
               else
               printf("not a right angle triangle");
                   break;
        case 3:
               printf("enter length of 3 sides of triangle\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a==b&&b==c&&c==a)
               printf("equilatefral");
               else
               printf("not an equilateral");
                  break;
        case 4: if(x==4)
            exit(0);
         default:
               printf("invalid");
    }
    }
    return 0;
}
