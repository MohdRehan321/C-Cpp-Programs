#include<stdio.h>
#include<string.h>
void reverse (char*,int);
int main()
{
    char s[20];
    printf("enter a string\n");
    gets(s);
    reverse(s,20);
    return 0;
}
void reverse(char *p,int size)
{
    int i,l;
    char ch;
    l=strlen(p);
    for(i=0;*(p+i);i ++)
    {
        ch = p[i];
        p[i] = p[l-1-i];
        p[l-1-i] = ch;
    }
         printf("%s",p);

}


