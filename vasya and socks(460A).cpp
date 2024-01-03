#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(m*i);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=sum)
        {
            sum+=1;
        }
    }
    cout<<sum;
}
