/*
input:23 35
output:35..............23
*/

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    
    if(iStart<0)
    {
        iStart = -iStart;
    }
     if(iEnd<0)
    {
        iEnd = -iEnd;
    }
    if(iStart>iEnd)
    {
        printf("Invali Range");
        return;
    }

    while(iEnd>=iStart)
    {
        printf("%d\t",iEnd);
        iEnd--;
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2); 
    return 0;

}