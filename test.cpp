#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    int c1=0,c2=0;
    for (int i = 0; i <s.size(); i++)
    {
       if(s[i]=='-')
       {
           c1++;
       }
       if(s[i]=='o')
       {
           c2++;
       }
    }
    if(c2==0)
    {
         cout<<"YES\n";
    }
     else  if((c1%c2) ==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

   
    
    return 0;
}
