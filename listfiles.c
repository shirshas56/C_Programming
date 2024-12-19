#include <dirent.h>
#include <stdio.h>
int main(){
    DIR *dir;
    struct dirent *ent;
    char path[100];
    printf("Enter directory path:");
    scanf("%s",path);
    dir=opendir(path);
    if(dir==NULL){
        perror("Error");
        return 1;
    }
    while((ent =readdir(dir))!=NULL){
        printf("%s\n",ent->d_name);
    }
    closedir(dir);
    return 0;
}