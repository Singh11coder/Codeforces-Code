#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<vector<int>>k(n);
        long long dist=0;
        int mid=(0+v.size()/2)-1;
        for(int i=0;i<n;i++)
        {
            k[i].push_back(v[i]);
            k[i].push_back(v[mid+i]);
            if(i!=mid && mid<v.size()){
            dist+=(v[mid+i+1]-v[mid+i])+(v[i+1]-v[i]);}
        }

        cout<<dist<<endl;
        for(int i=0;i<k.size();i++)
        {
            for(int j=0;j<k[i].size();j++)
            {
                cout<<k[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
}
