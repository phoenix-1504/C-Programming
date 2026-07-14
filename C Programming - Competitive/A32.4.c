#include <stdio.h>

void DisplauDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
       
        str++;
    }
}


int main ()
{
    char arr [20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    DisplauDigit(arr);

    return 0;
}