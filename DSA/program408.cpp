//-----OBJECT ORIENTED PROGRAMMING-----\\ 

#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private : 
        PNODE first ;
        int iCount ;

    public:
        SinglyLL(); //Function Declaration

        void Display();

        int Count();

        void InsertFirst(int iNo);

        void Insertlast(int iNo);

        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int iPos);

};


SinglyLL :: SinglyLL()
{
    this -> first = NULL;
    this -> iCount = 0;
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;
    int i = 0;

    
    for(temp = this -> first, i = 1; i <= this -> iCount; i++, temp = temp -> next)
    {
        cout << "| " << temp -> data << " | -> " ;
    }
    cout << "NULL" << endl;
}

int SinglyLL :: Count()
{
    return this -> iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    
    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> iCount == 0)
    {
        this -> first = newn; 
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }
    this -> iCount++ ;  // <<<IMPORTANT>>>
}

void SinglyLL :: Insertlast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    
    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> iCount == 0)
    {
        this -> first = newn; 
    }
    else
    {
        PNODE temp = this -> first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    this -> iCount++ ;  // <<<IMPORTANT>>>
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{
    
}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}

int main()
{
    int iRet = 0;
   
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();
    cout << "NUmber of elements are : " << iRet << endl;
    
    sobj.Insertlast(101);
    sobj.Insertlast(111);

    sobj.Display();

    iRet = sobj.Count();
    cout << "NUmber of elements are : " << iRet << endl;
    

   return 0;
}