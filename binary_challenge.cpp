#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int count[10],temp=0,largest;
    int i=0,n,kx=0;
    int bin[10];
    cout<<"Enter n:";
    cin>>n;
    while(n!=0)
    {
        bin[i]=(n%2);
        n=n/2;
        i++;
    }
    cout<<"\n";
    int m=1;
    for(int k=0;k<i;++k)
    {
        lu:
        if(bin[k]==1)
        {
            count[kx]+=1;
            if(bin[k+m]==1)
            {
                k++;
                m++;
                goto lu;
            }
            kx++;
        }
        kx++;
        for(int x=0;x<kx;++x)
        {
            largest=count[x];
            if(count[x+1]>largest)
            {
                temp=count[x+1];
                count[x+1]=largest;
                largest=count[x+1];
            }

        }
        cout<<"\n"<<largest;
        return 0;
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int m=2;
    // for(int k=0;k<=i;k++)
    // {
    //     f:
    //     if(bin[k]==1&&bin[k+1]==1)
    //     {
    //     count++;
    //     if(bin[k+m]==1)
    //     {
    //         k++;
    //         m++;
    //         goto f;
    //     }
    //     }
    // }
    // if(count==0)
    // cout<<1;
    // else
    // cout<<count;
//     return 0;
// }