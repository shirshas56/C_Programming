#include<stdio.h>
int main(){
    void max_min(int m,int n);
    int m,n;
    printf("Enter two integers:\n");
    scanf("%d %d",&m,&n);
    max_min(m,n);
    return 0;
}
 void max_min(int m, int n){
    if(m>n){
        printf("%d is greater than %d.\n",m,n);
    }else if(n>m){
        printf("%d is greater than %d\n",n,m);
    }
    else{
        printf("Both are equal.");
    }
 }