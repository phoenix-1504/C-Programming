////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : 5
//  output : 5 # 4  # 3 # 2 # 1 # 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iNo)
{
    int num = 0;

    for (num = iNo ; num>=1; num-- )
    {
        printf( " %d\t # \t", num);

        
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}