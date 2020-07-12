#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{char m;
    do 
    {
    Node *p;
    p=new Node;
    cout<<"\nEnter the data:";
    cin>>p->data;
    cout<<"\n"<<"Do you want more nodes?(y/n)";
    cin>>m;
    }while(m=='y'||m=='Y');
    return 0;
}