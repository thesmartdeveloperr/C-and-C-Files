#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6},temp;
    for(int i=0,j=5;i<j;++i,--j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"\nThe array is:\t";
    for(int i=0;i<=5;++i)
    cout<<a[i]<<" ";
    return 0;
}