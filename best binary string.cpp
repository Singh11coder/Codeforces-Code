#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='?')
        {
            s[0]='0';
        }
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                s[i]=s[i-1];
            }
        }
        cout<<s<<endl;

    }
}
