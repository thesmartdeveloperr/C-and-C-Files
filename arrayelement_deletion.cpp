#include<iostream>
using namespace std;
int main()
{
    int a[50];
    cout<<"Enter the number of elements in the array:";
    int n;
    cin>>n;
    cout<<"\nEnter the elements in the array:";
    for(int i=0;i<n;++i)
    cin>>a[i];
    cout<<"\nEnter the position you want to delete:";
    int x;
    cin>>x;
    for(int m=x;m<n;++m)
    {
        //the array is 1 2 3 4 and we have to delete 2nd positon element...
        if(m==n-1)
        break;
        a[m]=a[m+1];
    }
    cout<<"\nThe array after deleting the given element at positon "<<x<<" is:";
    for(int k=0;k<n-1;++k)
    cout<<a[k]<<" ";
    return 0;
}