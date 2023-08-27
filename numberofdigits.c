#include <stdio.h>

int main()
{
    int number;
    int count = 1;
   
    printf("Enter a number\n");
    scanf("%d",&number);
    
    while(number/10!=0)
    {
        count++;   
        number = number/10;
    }
    
    printf("\nThe number of digits are %d",count);
    
    return 0;
    
}
