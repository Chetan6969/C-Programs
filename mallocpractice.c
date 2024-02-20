#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);

    if((ptr =(int*)malloc(size*sizeof(int)))==NULL)
    {
        printf("Memmory Space is not available ");
    }
    else
    {
        printf("Enter elements : ");
        for(i=0;i<size;i++)
        {
            scanf("%d",&ptr[i]);
           
        }
        for(i=0;i<size;i++)
        {
             printf(" The value of [%dth] Position = %d\n",i+1,*ptr);
             *ptr++;
        }
        
    }
    return 0;
}
