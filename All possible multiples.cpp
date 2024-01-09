#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,x;
        cin>>n>>x;
        if(n%x>0)
        {
          cout<<-1<<endl;
        }
        else
        {
          vector<int>v(n+1);
          for(int i=1;i<n+1;i++)
            {
                v[i] = i;
            }
            v[1] = x;
            v[n] = 1;
            int f=0;
            while(x<n)
            {
                for(int i=x+1;i<=n;i++)
                {
                    if(n%i==0 && i%x==0)
                    {
                        v[x] = i;
                        x = i;
                        break;
                    }
                }
            }
            for(int i=1;i<n+1;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
