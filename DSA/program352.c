#include <stdio.h>

#pragma pack(1)
struct node
{

    int data;
    struct node *next;

};




int main()
{
    struct node obj;

    printf("%d\n", sizeof(obj));    //size --> 12 due to pragma pack
    //4(integer) + 8(pointer)


    return 0;
}