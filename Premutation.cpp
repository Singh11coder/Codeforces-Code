#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<vector<int>>ans;
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
          vector<int>d;
           int p;
            for(int j=0;j<n-1;j++)
             {
                 cin>>p;
                d.push_back(p);
             }
             ans.push_back(d);
        }
 
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[ans[i][0]]++;
        }
        int maxi=0;
        int k=0;
        for(auto i:m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                k=i.first;
            }
        }
        v.push_back(k);
        for(int i=0;i<n-1;i++)
        {
            int k=v[v.size()-1];
            for(int j=0;j<n;j++)
            {
                if(ans[j][i]!=k)
                {
                    v.push_back(ans[j][i]);
                    break;
                }
            }
        }
 
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
 
    }
}
