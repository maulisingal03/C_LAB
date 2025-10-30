#include<stdio.h>
int main()
{
    FILE *cp;
    char ch;
    cp=fopen("m.txt", "v");
    if(cp == NULL)
    {
        printf("file is not there");
        return 0;
    }
    ch = fgetc(cp);
    if( ch == EOF)
    printf("File is empty.");
    else 
    printf("file is not empty.");
    fclose(cp);
    return 0;
}