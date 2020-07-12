#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
 }*first=NULL;//,*second=NULL,*third=NULL;

void create(int A[],int n)
{
    int i;
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
    t=new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
    }
}
void Display(struct Node *p)
{
    while(p!=NULL)
    {
    printf("%d ",p->data);
    p=p->next;
    }
}
int main()
{
struct Node *temp;
int A[]={3,5,7,10,25,25,42};
// int B[]={1,2,3,4,5};
create(A,7);
// create2(B,5);
Display(first);
// cout<<endl;
// int n=count(first);
// cout<<n<<"\n"<<sum(first)<<endl<<max(first);
// Node *x=Lsearch(first,7);
// if(x)
// cout<<"\nKey is found\t"<<x->data;
// else
// cout<<"\nKey not found";
// cout<<"\n";
// if(isSorted(first))
// {
//     cout<<"The list is sorted";
// }
// else
// {
//     cout<<"list is not sorted";
// }
// RemoveDuplicates(first);
// Display(first);
// Reverse3(NULL,first);
// cout<<endl;
// Merge(first,second);
// Display(third);
return 0;
}
//  void create2(int A[],int n)
// {
//     int i;
//     Node *t,*last;
//     second=new Node;
//     second->data=A[0];
//     second->next=NULL;
//     last=second;
//     for(i=1;i<n;i++)
//     {
//     t=new Node;
//     t->data=A[i];
//     t->next=NULL;
//     last->next=t;
//     last=t;
//     }
// }
// void RDisplay(struct Node *p)
// {
// if(p!=NULL)
// {
 

// RDisplay(p->next);
//  printf("%d ",p->data);
// }
// }
// int count(Node *p)
// {
//     int c=0;
//     while(p)
//     {
//         c++;
//         p=p->next;
//     }
//     return c;
// }
// int sum(Node *p)
// {
//     int s=0;
//     while(p)
//     {
//         s+=p->data;
//         p=p->next;
//     }
//     return s;
// }
// int max(Node *p)
// {
//     int maxi=INT32_MIN;
//     while(p)
//     {
//         if(maxi<(p->data))
//         maxi=p->data;
//         p=p->next;
//     }
//     return maxi;
// }
// Node * Lsearch(Node *p,int key)
// {
//     while(p!=NULL)
//     {
//         if(key==p->data)
//         return p;
//         p=p->next;
//     }
//     return NULL;
// }
// void Insert(struct Node *p,int index,int x)
// {
// struct Node *t;
// int i;
// if(index < 0 || index > count(p))
// // return -1;
// t=new Node;
// t->data=x;
// if(index == 0)
// {
//     t->next=first;
//     first=t;
// }
// else
// {
// for(i=0;i<index-1;i++)
// p=p->next;
// t->next=p->next;
// }
// p->next=t;
// }
// void SortedInsert(struct Node *p,int x)
// {
//  struct Node *t,*q=NULL;
 
//  t=(struct Node*)malloc(sizeof(struct Node));
//  t->data=x;
//  t->next=NULL;

//  if(first==NULL)
//  first=t;
//  else
//  {
//  while(p && p->data<x)
//  {
//  q=p;
//  p=p->next;
//  }
//  if(p==first)
//  {
//  t->next=first;
//  first=t;
//  }
//  else
//  {
//  t->next=q->next;
//  q->next=t;
//  }
//  }

// }
// // void Delete(Node *p,int index)
// // {
// //     Node *q;
// //     int x=-1;
// //     if(index<1||index>count(p))
// //     {
// //         // return -1;
// //     }

// // }
// int isSorted(Node *p)
// {
//     int x=-65536;
//     while(p!=NULL)
//     {
//         if(p->data<x)
//         return 0;
//         x=p->data;
//         p=p->next;
//     }
//     return 1;
// }
// void RemoveDuplicates(Node *p)
// {
//     Node *q=p->next;
//     while(q)
//     {
//         if(p->data!=q->data)
//         {
//             p=q;
//             q=q->next;
//         }
//         else
//         {
//             p->next=q->next;
//             delete q;
//             q=p->next;
//         }
        
//     }
// }
// void Reverse1(Node *p)
// {
//     int *A,i=0;
//     Node *q=p;
//     A=new int(count(p));
//     while(q)
//     {
//         A[i]=q->data;
//         q=q->next;
//         i++;
//     }
//     q=p;
//     i--;
//     while(q!=NULL)
//     {
//         q->data=A[i];
//         q=q->next;
//         i--;
//     }
// }
// void Reverse2(Node *p)
// {
//     Node *q=NULL,*r=NULL;
//     while(p)
//     {
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
//     first=q;
// }
// void Reverse3(Node *q,Node *p)
// {
//     if(p)
//     {
//         Reverse3(p,p->next);
//         p->next=q;
//     }
//     else
//     {
//         first=q;
//     }
    
// }
// void Concat(Node *p,Node *q)
// {
//     third=p;
//     while(p->next!=NULL)
//     {
//             p=p->next;
//     }
//     p->next=q;
// }
// void Merge(Node *p,Node *q)
// {
//     Node *last;
//     if(p->data<q->data)
//     {
//         third=last=p;
//         q=q->next;
//         third->next=NULL;
//     }
//     while(p&&q)
//     {
//         if(p->data < q->data)
//         {
//             last->next=p;
//             last=p;
//             p=p->next;
//             last->next=NULL;
//         }
//         else
//         {
//             last->next=q;
//             last=q;
//             q=q->next;
//             last->next=NULL;
//         }
//         if(p)
//         last->next=p;
//         if(q)
//         last->next=q;
        
//     }
// }
