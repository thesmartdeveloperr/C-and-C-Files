#include<iostream>
using namespace std;
int main()
{
    // let the array be 11,2,15,3,55
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i)
    cin>>a[i];
    int sum=n*(n+1)/2;
    int sumx=0;
    for(int i=0;i<n-1;++i)
    sumx+=a[i];
    int diff=sum-sumx;
    cout<<endl<<diff;
    return 0;
}