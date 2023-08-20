#include<stdio.h>

int main()
{
    printf("Enter the number\n");
    int number;
    scanf("%d",&number);
    printf("The multiplication table is below\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",i,number,i*number);
    }

    return 0;
}