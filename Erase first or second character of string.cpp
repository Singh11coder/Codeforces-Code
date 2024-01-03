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
        map<char,int>m;
        vector<int>v;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            if(m[s[i]]==1)
            {
                v.push_back(i);
            }
        }
        
        long sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=(n-v[i]);
        }
        cout<<sum;
        cout<<endl;
    }
}
