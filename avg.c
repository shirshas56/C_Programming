#include<stdio.h>
int main()
{
    int a,b,c,sum;
    int avg;
  printf("Enter 1st number\n");
    scanf("%d", &a);

    printf("Enter 2nd number\n");
    scanf("%d", &b);
    
    printf("Enter 3rd number\n");
    scanf("%d", &c);


    printf("The sum of three numbers are:%d\n",a+b+c);
    printf("The avg of three numbers are:%d\n",(a+b+c)/3);

    return 0;

}