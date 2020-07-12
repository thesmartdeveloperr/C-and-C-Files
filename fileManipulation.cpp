#include<iostream>
// #include<string>
#include<fstream>
#include<experimental/string>
using namespace std;
int main()
{
    fstream fout("fileA.txt",ios::out|ios::app);
    fout<<"That is a file i have created using c++ file i/o";
    if(fout.is_open())
    cout<<"Your task is done...";
    fout.close();
//    if(fout.fail())
//     cout<<"\ndone man done!!";

    return 0;
}