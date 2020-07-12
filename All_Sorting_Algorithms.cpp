#include<iostream>
using namespace std;
void BubbleSort(int a[],int n)
{
    int i,j,temp;
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-1-i;++j)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;++i)
    cout<<a[i]<<" ";
}
void SelectionSort(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;++i)
    {
        for(j=k=i;j<n;++j)
        {
            if(a[j]<a[k])
            k=j;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;++i)
    cout<<a[i]<<" ";
}
int partition(int a[],int l,int h)
{
    int temp;
    int pivot=a[l];
    int i=l,j=h;
    do
    {
        do{i++;}while(a[i]<=pivot);
        do{j++;}while(a[j]>pivot);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    } while (i<j);
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}
void QuickSort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        partition(a,l,h);
        QuickSort(a,l,j);
        QuickSort(a,j+1,h);
    }
    cout<<endl;
    for(int i=0;i<h;++i)
    cout<<a[i]<<" ";
}
void InsertionSort(int a[],int n)
{
    int i,j,x;  // let the elements be ,1,12,22,44
    for(i=1;i<n;++i)//-19
    {
        j=i-1;//2
        x=a[i];//-19
        while(j>-1&&a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    cout<<endl;
    for(int i=0;i<n;++i)
    cout<<a[i]<<" ";
}
void CountSort(int a[],int n)
{
    int i,j,max=a[0];
    int *c;
    for(i=1;i<n;++i)
    {
        if(a[i]>max)
        max=a[i];
    }
    c=new int[max+1];
    for(i=0;i<max+1;++i)
    c[i]=0;
    j=0;
    for(i=0;i<n;++i)
    c[a[i]]++;
    while(i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else
        {
            i++;
        }
        
    }
    for(int i=0;i<n;++i)
    cout<<a[i]<<" ";
}
int main()
{    
    int a[]={12,1,22,-19,44};
    int n=5;
    CountSort(a,n);
    return 0;
}