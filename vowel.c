#include<stdio.h>
int main(void)
{
    char a;
    printf("enter a character = ");
    scanf("%c" ,&a);
    switch(a){
        case 'a':
        printf("character is a vowel");
        break;
        case 'e':
        printf("character is a vowel");
        break;
        case 'i':
        printf("character is a vowel");
        break;
        case 'o':
        printf("character is a vowel");
        break;
        case 'u':
        printf("character is a vowel");
        break;
        case 'A':
        printf("character is a vowel");
        break;
        case 'E':
        printf("character is a vowel");
        break;
        case 'I':
        printf("character is vowel");
        break;
        case 'O':
        printf("character is vowel");
        break;
        case 'U':
        printf("character is vowel");
        break;
        default:
        printf("it is a consonent");
    }
    return 0;
}