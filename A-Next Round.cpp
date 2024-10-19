#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    int n,k,a,sum=0;
    cin>>n>>k;
    k--;
    for(int i=0;i<n;i++)
    {
    cin>>a;
    v1.push_back(a);
    }

    
    for(int i=0;i<n;i++)
    {
        if(v1[i]>=v1[k]&&v1[i]>0)
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    
    cout<<sum;
    return 0;
}