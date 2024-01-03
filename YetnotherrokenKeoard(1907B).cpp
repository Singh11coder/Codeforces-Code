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
        vector<int>small;
        vector<int>large;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='b' && s[i]!='B')
            {
                if(s[i]>=65&&s[i]<=90)
                {
                    large.push_back(i);
                }
                if(s[i]>=97&& s[i]<=122)
                {
                    small.push_back(i);
                }
            }
            if(s[i]=='b')
            {
                if(!small.empty())
                small.pop_back();
            }
            if(s[i]=='B')
            {
                if(!large.empty())
                large.pop_back();
            }
        }
        for(int i=0;i<large.size();i++)
        {
            small.push_back(large[i]);
        }
        sort(small.begin(),small.end());
        string h="";
        for(int i=0;i<small.size();i++)
        {
            h+=s[small[i]];
        }
        cout<<h<<endl;
    }
}
