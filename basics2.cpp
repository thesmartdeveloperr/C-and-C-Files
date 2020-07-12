#include<iostream>
using namespace std;
namespace average{
int cube(int a)
{
    return a*a*a;
}
}
int main()
{
    int a;
    cout<<"\n";
    cin>>a;
    cout<<"\n"<<average::cube(a);
    // int a[]={1,2,3,4};
    // auto *p=begin(a);
    // auto *q=end(a);
    // for(int x:a)
    // cout<<x<<" ";
    // cout<<"\n"<<"Begin is:\t"<<*p<<"\n"<<"End is:\t"<<*q;
    // int *p=NULL;
    // cout<<"P is:\t"<<p;
    return 0;
}