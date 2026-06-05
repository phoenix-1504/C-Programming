/*
input:23 30
output:212
*/

#include<stdio.h>

void RangeSum(int iStart,int iEnd)
{
    if(iStart<0)
    {
        printf("Invali Range");
        return;
    }
    if(iStart>iEnd)
    {
        printf("Invali Range");
        return;
    }
    int iSum=0;

    while(iStart<=iEnd)
    {
        iSum=iStart+iSum;
        printf("%d\t",iSum);
        iStart++;
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

    RangeSum(iValue1,iValue2); 
    return 0;

}