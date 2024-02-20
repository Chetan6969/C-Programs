#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Hello.txt","w"); 

    printf(" Data input : \n");

    while ((ch = getchar()) != EOF);
    {
        printf("%c",ch);
    }
    fclose(fp); 
    return 0;   
}