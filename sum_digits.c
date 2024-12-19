#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&n);

     if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
}
 while (n > 0) {
        sum += n % 10; 
        n /= 10;      
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}