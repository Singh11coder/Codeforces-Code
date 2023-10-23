#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long z = count(v.begin(),v.end(),0);
 
        if(z>0)
        {
            cout<<n-z<<endl;
        }
        else
        {
            long long f=0;
            for(int i=1;i<n;i++)
            {
                if(v[i]==v[i-1])
                {
                    f=1;
                    break;
                }
            }
 
            if(f==1)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<n+1<<endl;
            }
        }
    }
}
