#include<iostream>
using namespace std;
int main()
{
    int i,n,a[50];
    cout<<"Enter the size of the array:\t";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=0;i<n;++i)
    cin>>a[i];
    cout<<"THE ELEMENTS ENTERED ARE:\t";
    for(i=0;i<n;++i)
    cout<<a[i]<<" ";
    return 0;
}