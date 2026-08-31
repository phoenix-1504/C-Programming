//-----OBJECT ORIENTED PROGRAMMING-----\\ 

#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      //$
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private : 
        PNODE first ;
        int iCount ;

    public:
        DoublyLL(); //Function Declaration

        void Display();

        int Count();

        void InsertFirst(int iNo);

        void InsertLast(int iNo);

        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int iPos);

};


DoublyLL :: DoublyLL()
{
    this -> first = NULL;
    this -> iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = first;
    cout << "\nNULL <=>";
    while(temp != NULL)
    { 
        cout  << "| " << temp -> data << " | <=> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int DoublyLL :: Count()
{
    return this -> iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    
    newn = new NODE;
    
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if (first == NULL)
    {
        first = newn;
    }
    else 
    {
        newn -> next = first;
        first -> prev = newn;
        first = newn; 
    }
    iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else 
    {
        temp = first;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;
    }
    iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if ((iPos < 1) || (iPos > iCount+1))
    {
        cout << "Invalid Postion";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = first;
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        newn -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        
        this -> iCount++;

    }
    
}

void DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    temp = first;

    if(temp == NULL)
    {
        cout << "LINKED LIST IS EMPTY";
        return;
    }
    else if(temp -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else 
    {
        first = first -> next;
        delete first -> prev;
        first -> prev = NULL;
    }
    iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    temp = first;

    if(temp == NULL)
    {
        cout << "LINKED LIST IS EMPTY";
        return;
    }
    else if(temp -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
        temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
    
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Postion"; 
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = target -> next;
        target -> next -> prev = temp;
        
        delete target;

        this -> iCount-- ;
    }
    
}

int main()
{
    DoublyLL sobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while (iChoice != 9)
    {
        cout << "------------------------------\n";
        cout << "Enter Your Choice\n";
        cout << "------------------------------\n";
        cout << "1: Insert Node at FIRST POSITION\n";
        cout << "2: Insert Node at LAST POSITION\n";
        cout << "3: Insert Node at GIVEN POSITION\n";
        cout << "4: Delete Node from FIRST POSITION\n";
        cout << "5: Delete Node from LAST POSITION\n";
        cout << "6: Delete Node from GIVEN POSITION\n";
        cout << "7: Display the NODES of LINKED LIST\n";
        cout << "8: Count the NODE LINKED LIST \n";
        cout << "9: Terminate the Application\n";
        cout << "------------------------------\n";

        cin >> iChoice;

        switch (iChoice)
        {
            case 1: 
                cout << "Enter the Value : \n";
                cin >> iValue;
                sobj.InsertFirst(iValue);
                break;
            
            case 2: 
                cout << "Enter the Value : \n";
                cin >> iValue;
                sobj.InsertLast(iValue);
                break;
            
            case 3: 
                cout << "Enter the Value : \n";
                cout << "Enter the Position : \n";
                cin >> iValue;
                cin >> iPosition;
                sobj.InsertAtPos(iValue, iPosition);
                break;

            case 4:
                sobj.DeleteFirst();
                break;
            
            case 5:
                sobj.DeleteLast();
                break;
            
            case 6: 
                cout << "Enter the Position : \n";
                cin >> iPosition;
                sobj.DeleteAtPos( iPosition);
                break;
            
            case 7: 
                cout << "Elements of Linked List are : \n";
                sobj.Display();
                break;
            
            case 8: 
                iRet = sobj.Count();
                cout << "Number of Elements are : \n" << iRet << endl;
                break;

            case 9:
                cout << "Thank You for using Marvellous Infosystem's Application! \n";
                break;
            
            default:
                cout << "Invalid Choice\n";
        }
    }
    


   return 0;
}