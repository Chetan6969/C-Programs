#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    long n;

    printf("Data Input:");

    fp = fopen("Chirag.txt","w");

    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    printf("No. of character entered:%ld\n",ftell(fp));
    fclose(fp);

    fp = fopen("Chirag.txt","r");
    n = 0L;

    while(feof(fp)==0)
    {
        fseek(fp,n,0);
        printf("The position of [%c] character : [%ld]\n\n",getc(fp),ftell(fp));
        n = n+1;
    }
    printf("\n");
    fseek(fp,-1,2);
    do
    {
        putchar(getc(fp));
    } 
    while(!fseek(fp,-2L,1));

    fclose(fp);

    printf(" \nThank You ");\

    return 0;  
}