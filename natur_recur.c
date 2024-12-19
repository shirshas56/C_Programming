#include<stdio.h>

int sum_of_natural_numbers(int n){
    if(n==1){
        return 1;
        }else{
        return n + sum_of_natural_numbers(n-1);
         }
    }
int main(){
    int n=20;
    int result=sum_of_natural_numbers(n);
    printf("The sum of  first 20 natural numbers are:%d\n",result);
    return 0;
}