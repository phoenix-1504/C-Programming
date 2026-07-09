#include <stdio.h>

int main ()
{
    int iNo1, iNo2, Ans = 0; 

    printf("Enter first Number : \n");
    scanf("%d", &iNo1);

    printf("Enter second Number : \n");
    scanf("%d", &iNo2);

    Ans = iNo1 & iNo2 ;
    
    printf("Result is : %d\n", Ans);

    
    return 0 ;

}