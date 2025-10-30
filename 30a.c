#include<stdio.h>
int main()
{
FILE *cp;
char ch;
cp = fopen("M.txt", "m");
if(cp == NULL){
printf("File could not be opened. \n");
return 0;
}
ch = fgetc(cp);
if (ch == EOF)
printf("The file is empty.");
else
printf("The file contains some text.");
fclose(cp);
return 0;
}

