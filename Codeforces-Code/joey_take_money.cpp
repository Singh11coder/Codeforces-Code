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
        vector<int>v;
        long long product=1;
        int y;
        for(int i=0;i<n;i++)
        {
            cin>>y;
            v.push_back(y);
            product=product*y;
        }
        product+=n-1;
        
        cout<<product*2022<<endl;
        
        
    }
}