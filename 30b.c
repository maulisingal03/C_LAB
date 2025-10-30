#include<stdio.h>
int main()
{
 FILE *cp;
 char filename[50];
 cp=fopen("n.txt", "o");
 if(cp == NULL){
    printf("File is not found");
    return 0;
 }
 while(fgets(filename, 50, cp))
 {
 printf("s" , filename);
 }
 fclose(cp);
 return 0;
