#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void display(node *p)
{
    int i=0;
    while(p!=NULL && i<5)
    {
        cout<<"\nEnter the value of data:";
        cin>>p->data;
        cout<<"\nThe entered data is: "<<p->data;
        p=p->next;
        i++;
    }
}
int main()
{
    node *first;
    first=new node;
    display(first);
    return 0;
}