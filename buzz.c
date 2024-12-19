#include <stdio.h>
int main(){
    int num;
    printf("Enter a Number:\n");
    scanf("%d\n", &num);

    if(num%10==7 || num%7==0){
    printf("%d is a buzz number.",num);
    } else 
    {
    printf("%d is not a buzz number.",num);
    return 0;
    }
}