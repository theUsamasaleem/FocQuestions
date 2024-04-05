//Write a C-program function which takes 2 pointers as input and swap their values. Following
//should be the function prototype:
//• void swap_nums(int *x, int *y);

#include <stdio.h>

// function to swap the two numbers
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int num1,num2;
    printf("Enter a number1: ");
    scanf("%d",&num1);
    printf("Enter a number2: ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("Number1 = %d\n",num1);
    printf("Number2 = %d\n",num2);

    return 0;
}
