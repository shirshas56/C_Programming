#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    char c;
    int lines=0;
    printf("Enter Filename:");
    scanf("%s",filename);

    fp=fopen(filename,"r");
    if(fp== NULL){
        perror("Error");
        return 1;
    }
    while((c=fgetc(fp))!=EOF){
        printf("%c",c);
        }
    fclose(fp);
    return 0;
}