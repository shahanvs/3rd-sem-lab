#include <stdio.h>
#include <string.h>
int main()
{
    char *s, str[30];
    int len, i;
    printf("\nEnter a string: ");
    gets(str);
    s=str;
    len = strlen(str);
    printf("\nThe reverse of the string is: ");
    for (i=len ; i>=0 ; i--)
    {
        printf("%c", *(s + i));
    }
    return 0;
}