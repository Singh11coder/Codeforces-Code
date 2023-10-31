#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<string>v;
        map<char,int>m;
        string h;
        char p;
        for(int i=0;i<2;i++)
        {
            cin>>h;
            v.push_back(h);
        }
        
        for(int i=0;i<v.size();i++)
        {  string k=v[i];
           for(int j=0;j<k.length();j++)
           {
               m[k[i]]++;
           }
        }
        cout<<m.size()-1<<endl;
    }
}
