#include<stdio.h>
#include<string.h>

    struct marks
    {
        int rollno;
        char name[30];
        float chem_marks,math_marks,phy_marks;
    };
 void display(struct marks percentage)
 {
     printf("percentage is %f\n",percentage);
 }

struct marks input()
{
    int i;
    struct marks b[5];
    for(i=0;i<4;i++){
    printf("enter name,roll no.,students marks in chemistry,mathematics,phy");
    scanf("%d",&b[i].rollno);
    fflush(stdin);
    fgets(b[i].name,30,stdin);
    b.name[strlen (b.name)-1]='\0';
    scanf(" %f %f %f",&b.chem_marks,&b.math_marks,&b.phy_marks);}
    return b;

}
 struct marks percentage()
{
    struct marks marks[5];
    int i;
    for(i=0;i<=4;i++);
    printf("student%d \n",i+1);
    float percentage;
    percentage=(marks[i].chemmarks+marks[i].mathmarks+marks[i].phymarks);
    return percentage;
}
int  main()
{

    struct marks b1[5],b2;
    int i;
    for(i=0;i<=4;i++)
    b1[i]=input();
    marks percentage(b2,5);
     return 0;
}


