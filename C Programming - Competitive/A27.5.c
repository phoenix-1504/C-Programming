////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : iRow = 5    iCol = 5
//  output :    1       2       3       4       5
//                      2       3       4       5
//                              3       4       5          
//                                      4       5
//                                              5
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for (i = 1 ; i<=iRow; i++ )
    {
        for (j=1, iCnt =1 ; j<=iCol; j++, iCnt++)
        {
            if(j>=i )
            {
                printf("%d\t", iCnt);
            }
            else
            {
                printf("\t");
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