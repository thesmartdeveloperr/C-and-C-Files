#include<iostream>
using namespace std;
int main()
{
    int n,a[50];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"\nEnter the elements:";
    for(int m=0;m<n;++m)
    {
        cin>>a[m];
    }
    cout<<"\nEnter the position you want to insert at:";
    int x,val;
    cin>>x;
    cout<<"\nEnter the value you want to insert:";
    cin>>val;
    for(int j=a[n-1];j>=x;--j)
    {
        // array elements are 1 2 3 and x=1,n=3(of course)
        a[j+1]=a[j];
        if(j==x)
        a[j]=val;
    }
    cout<<"\nThe new array after inserting the given element is:\t";
    for(int k=0;k<n+1;++k)
    cout<<a[k]<<" ";
    return 0;
}