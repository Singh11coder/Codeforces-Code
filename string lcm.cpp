#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;
        string str1=a;
        string str2=b;
        int p=lcm(a.length(),b.length());
        int flag=0;
        while(str1.length()<=p && str2.length()<=p)
        {
            if(str1==str2)
            {
                flag=1;
                break;
            }
            else if(str1.length()>str2.length())
            {
                str2+=b;
            }
            else
            {
                str1+=a;
            }

        }
        if(flag)
        {
            cout<<str1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}
