#include<iostream>
using namespace std;

int main()
{
    long n,out=0;
    cin>>n;
    while(n>=2520)
    {
        out+=1;
        n-=2520;
    }
    cout<<out;
    return 0;
}
