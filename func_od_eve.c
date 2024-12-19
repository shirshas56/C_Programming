#include<stdio.h>
 int check_odd_even(int n){
    if(n%2==0){
        printf("the number is an even number");
    }else{
        printf("the number is an odd number ");
    }
 }
 int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The number is %s",n,check_odd_even(n));
    return 0;
 }