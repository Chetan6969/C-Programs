#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int number,i;

    printf("Data input:");
    f1 = fopen("chetan.txt","w");

    for(i=1;i<=30;i+1)
    {
        scanf("%d",&number);
        if(number==-1)
        {
            break;
        }
        putw(number,f1);
    }
    fclose(f1);

    f1 = fopen("chetan.txt","r");
    f2 = fopen("Odd.txt","w");
    f3 = fopen("Even.txt","w");

    while((number = getw(f1))!= EOF)
    {
        if(number %2==0)
        {
            putw(number,f2);
        }
        if(number%2 == 1)
        {
            putw(number,f3);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2 = fopen("Even.txt","r");
    f3 = fopen("Odd.txt","r");

    printf("\n Odd File : ");
    while((number = getw(f2))!=EOF)
    {
        printf("%4d",number);
    }
    printf("\n Even File : ");
    while((number = getw(f3))!= EOF)
    {
        printf("%4d",number);
    }
    fclose(f2);
    fclose(f3);
}