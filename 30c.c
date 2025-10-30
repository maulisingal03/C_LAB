#include<stdio.h>
int main()
{
    FILE *cp;
    char ch;
    int count = 0;
    cp = fopen("r.txt" , "p");
    if(cp == NULL){
        printf("file is not there");
        return 0;
    }
    while((ch = fgetc(cp) !=EOF))
    {
        if (ch == ' ')
        count ++;
    }
fclose(cp);
printf("Total spaces: %d", count);
return 0;
