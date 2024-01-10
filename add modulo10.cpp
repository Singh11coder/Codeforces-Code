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
        string s;
        cin>>s;
        int result=0;
        for(int i=0;i<n;i++)
        {
            int dist=0;
            vector<int>v(10);
            for(int j=i;j<min(i+100,n);j++)
            {
               if(v[s[j]-'0']==0)
               {
                 dist++;
               }
               v[s[j]-'0']++;
               int maxi=0;int flag=1;
               for(int i=0;i<v.size();i++)
               {
                   if(v[i]>dist)
                   {
                     flag=0;
                     break;
                   }
               }
               result+=flag;
               
            }
        }
        cout<<result<<endl;
    }
}
