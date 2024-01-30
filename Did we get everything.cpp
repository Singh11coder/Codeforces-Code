#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,m;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        set<char>st;
        string l="";
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
            }
            if(st.size()==k)
            {
                l+=s[i];
                st.clear();
                count++;
            }
        }
        if(count>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            char ch='a';
            int o;
            for(int i=0;i<=k;i++)
            {
                if(st.find(ch+i)==st.end())
                {
                    o=i;
                    break;
                }
            }
            while(l.size()<n){
                l+=ch+o;
            }
            cout<<"NO"<<endl;
            cout<<l<<endl;
        }
    }
}
