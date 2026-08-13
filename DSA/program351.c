#include <stdio.h>

struct node
{

    int data;
    struct node *next;

};


int main()
{
    struct node obj;

    printf("%d\n", sizeof(obj));    //size --> 16
    // 4(integer) + 4(padding) + 8(pointer)

    return 0;
}