#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        
        long long a[n];
        for(int i=0;i<(n-1);++i){
            cin>>a[i];
        }
        
        long long sum = n;
        sum*=(sum+1ll);
        sum/=2ll;
        
        if(a[n-2] > sum){
            cout<<"NO"<<endl;
            continue;
        }
        
        set<long long>s;
        for(int i=1;i<=n;++i)
        {
            s.insert(i);
        }
        int c = 0;
        long long val = -1,star = -1;
        int f = 0;
        for(int i=1;i<(n-1);++i){
            long long dif =a[i]-a[i-1];
            if(s.find(dif) == s.end()){
                    val = dif;
                    
            }
            else s.erase(dif);
             
        }
        
        if(a[n-2] == sum){
            //either from start
            if(s.size() == 2)
            {
                //it means from start
                long long cur_sum = 0;
                for(auto&x:s)cur_sum += x;
                
                if(cur_sum == a[0])
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else if(s.size()>3)
            {
                cout<<"NO"<<endl;
            }
            else{
                //it means from middle
                if(s.find(a[0]) == s.end())
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    s.erase(a[0]);
                    long long cur_sum = 0;
                    for(auto&x:s)
                    {
                        cur_sum += x;
                    }
                    if(cur_sum == val)
                    {
                        cout<<"YES"<<endl;
                    }
                    else 
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        else
        {
    
            if(s.size()>2)
            {
                cout<<"NO"<<endl;
            }
            else if(s.find(a[0]) == s.end())
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
