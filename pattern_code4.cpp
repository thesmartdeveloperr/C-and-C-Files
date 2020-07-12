#include<iostream>
using namespace std;
// if the string is hacker then print hce akr
/*//
print-
------------------------
* * * * *  * * * * *   |
* * * *      * * * *   |
* * *          * * *   |
* *              * *   |
*                  *   |
*                  *   |
* *              * *   |
* * *          * * *   |
* * * *      * * * *   | 
* * * * *  * * * * *   |
------------------------
//*/
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int N=2*n;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<=i;++j)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=N;i>0;--i)
    {
        for(int j=0;j<=i;++j)
        cout<<"*"<<" ";
        cout<<"\n";
        for(int )
    }
    for()
    {
        for()
        {
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // for(int i=0;i<n;++i)
    // {

    // }
    // for(int i=0;i<n;++i)
    // {
    //     for(int j=n-i;j>0;--j)
    //     cout<<"*"<<" ";
    //     cout<<"\n";
    // }
    // for(int i=0;i<n;++i)
    // {
    //     for(int j=0;j<=i;++j)
    //     cout<<"*"<<" ";
    //     cout<<"\n";
    // }
    return 0;
}