#include <stdio.h>

int main()
{
    int number;
    int sum;
    printf("enter the number\n");
    scanf("%d",&number);
    
    
    while(number%10!=0)
    {
        sum=number%10+sum;
        number=number/10;
    }
    
    printf("\nSum of digits is %d",sum);
    
    
    return 0;
    
}
