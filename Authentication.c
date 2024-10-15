#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,j;
    char a[3][2][20];
    printf("enter username and password\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
        {
            gets(a[i][j]);
        }
    }

    char username[10],password[10];
    printf("enter check username and password \n");
    gets(username);
    gets(password);
    for(i=0;i<3;i++)
    {
        if(strcmp(username,a[i][0])==0 && strcmp(password,a[i][1])==0)
        {
            printf("login successful !!");
            flag = 1;
        }
    }
    if(flag==0)
        printf("username or password no matched");
    return 0;
}
