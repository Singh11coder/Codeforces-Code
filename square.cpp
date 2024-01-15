#include<bits/stdc++.h>
using namespace std;
bool flag(double q)
{
    long long r=floor(q);
    if(r==q)
    {
        return 1;
    }
    return  0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=4;
        
        vector<pair<int,int>>v;
        pair<int,int>p;
        long long u,y;
        long long c=0,d=0;
        for(int i=0;i<n;i++)
        {
            cin>>u;
            cin>>y;
        
            p.first=u;
            p.second=y;
            v.push_back(p);
        }
        c=v[0].first;
        d=v[0].second;
        long long h;
        for(int i=1;i<4;i++)
        {
           
           int e=abs(pow((c-v[i].first),2)+pow((d-v[i].second),2));
           if(flag(sqrt(e)))
           {
             h=sqrt(e)*sqrt(e);
             cout<<h<<endl;
             break;
           }
        }


    }
}
