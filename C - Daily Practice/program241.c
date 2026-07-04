#include <stdio.h>

int main ()
{
    char Arr[50] = {'\0'} ;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr); //%[^'\n']s : regex(regular expression). this tells scanf to accept all the input till user hits enter
    
    printf("Entered String is : %s\n", Arr);

    return 0 ;
}