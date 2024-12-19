#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);

    int eng[n],maths[n],total[n];
    for(i=0;i<n;i++){ 
        printf("Enter English marks for student %d:",i+1);
        scanf("%d",&eng[i]);
        printf("Enter Maths marks for student %d:",i+1);
        scanf("%d",&maths[i]);
        total[i]=eng[i] + maths[i];
    }
    printf("\n Total marks of students:\n");
    for(i=0;i<n;i++){
        printf("Students %d:%d\n", i+1,total[i]);
    }
    return 0;
    }
