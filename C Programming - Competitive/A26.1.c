////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : iRow = 5    iCol = 5
//  output :  *       #       #       #       #
//            *       *       #       #       #
//            *       *       *       #       #
//            *       *       *       *       #
//            *       *       *       *       * 
//             
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for (i = 1 ; i<=iRow; i++ )
    {
        for (j=1; j<=iCol; j++)
        {
            if(j>i)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter number of Columns :");
    scanf("%d",&iValue2);


    Pattern(iValue1, iValue2);

    return 0;
}