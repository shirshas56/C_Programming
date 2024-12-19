#include <stdio.h>
int main(){
    float Fa,celsius;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f", &Fa);
    celsius=(Fa-32) * 5/9;
    printf("The temperature in celsius is:%2f\n",celsius);
    return 0;
}