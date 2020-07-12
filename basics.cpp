#include<iostream>
using namespace std;
class men
{
    int value=0;
    public:
    men()=default;
    void prints(){
        cout<<value;
    }
};
int main()
{
    men m;
    m.prints();
    // int *array=new int[5];
    // // array={1,2,3,4,5};
    // // for(int *a:array)
    // // cout<<a<<" ";
    // cout<<"Enter the numbers:";
    // for(int i=0;i<5;++i)
    // cin>>array[i];
    // for(int i=0;i<5;++i)
    // cout<<array[i]<<" ";
    // delete []array;
    // return 0;
}