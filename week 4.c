#include <stdio.h>
#define MAX 5
int Stack[MAX], top = -1;
int IsFull();
int IsEmpty();
void Push(int ele);
void Pop();
void Top();
void Display();
int main()
{
int ch, e;
do
 {
 printf("1.PUSH 2.POP 3.TOP 4.DISPLAY 5.EXIT");
 printf("\nEnter your choice : ");
 scanf("%d", &ch);
 switch(ch)
 {
 case 1:
 printf("Enter the element : ");
 scanf("%d", &e);
 Push(e);
 break;
 case 2:
 Pop();
 break;
 case 3:
 Top();
 break; 
Node *FindNext(Node *List, int x) 
{ 
Node *Position; 
 Position = Find(List, x); 
return Position->Next; 
} 
void InsertBeg(Node *List, int e) 
{ 
Node *NewNode = malloc(sizeof(Node)); 
 NewNode->Element = e; 
if(IsEmpty(List)) 
 NewNode->Next = NULL; 
else
 NewNode->Next = List->Next; 
 List->Next = NewNode; 
} 
void InsertLast(Node *List, int e) 
{ 
Node *NewNode = malloc(sizeof(Node)); 
Node *Position; 
 NewNode->Element = e; 
 NewNode->Next = NULL; 
if(IsEmpty(List)) 
 List->Next = NewNode; 
else
 { 
 Position = List; 
 while(Position->Next != NULL) 
 Position = Position->Next; 
 Position->Next = NewNode; 
 } 
} 
void InsertMid(Node *List, int p, int e) 
{ 
Node *NewNode = malloc(sizeof(Node)); 
Node *Position; 
 Position = Find(List, p); 
 NewNode->Element = e; 
 NewNode->Next = Position->Next; 
 Position->Next = NewNode; 
} 
void DeleteBeg(Node *List) 
{ 
if(!IsEmpty(List)) 
 { 
 Node *TempNode; 
 TempNode = List->Next; 
 List->Next = TempNode->Next; 
 printf("The deleted item is %d\n", TempNode->Element); 
 free(TempNode); 
 } 
else
 printf("List is empty...!\n"); 
} 
void DeleteEnd(Node *List) 
{ 
if(!IsEmpty(List)) 
 { 
 Node *Position; 
 Node *TempNode; 
 Position = List; 
 while(Position->Next->Next != NULL) 
 Position = Position->Next; 
 TempNode = Position->Next; 
 Position->Next = NULL; 
 printf("The deleted item is %d\n", TempNode->Element); 
 free(TempNode); 
 } 
else
 printf("List is empty...!\n"); 
} 
void DeleteMid(Node *List, int e) 
{ 
if(!IsEmpty(List)) 
 { 
 Node *Position; 
 Node *TempNode; 
 Position = FindPrevious(List, e); 
 if(!IsLast(Position)) 
 { 
 TempNode = Position->Next; 
 Position->Next = TempNode->Next; 
 printf("The deleted item is %d\n", TempNode->Element); 
 free(TempNode); 
 } 
 } 
else
 printf("List is empty...!\n"); 
} 
case 4:
 Display();
 break;
 }
 } while(ch <= 4);
return 0;
}
int IsFull()
{
if(top == MAX - 1)
 return 1;
else
 return 0;
}
int IsEmpty()
{
if(top == -1)
 return 1;
else
 return 0;
}
void Push(int ele)
{
if(IsFull())
 printf("Stack Overflow...!\n");
else
 {
 top = top + 1;
 Stack[top] = ele;
 }
}
void Pop()
{
if(IsEmpty())
 printf("Stack Underflow...!\n");
else
 {
 printf("%d\n", Stack[top]);
 top = top - 1;
 }
}
void Top()
{
if(IsEmpty())
 printf("Stack Underflow...!\n");
elseprintf("%d\n", Stack[top]);
}
void Display()
{
int i;
if(IsEmpty())
 printf("Stack Underflow...!\n");
else
 {
 for(i = top; i >= 0; i--)
 printf("%d\t", Stack[i]);
 printf("\n");
 }
} 

