#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    
    int n=x.length();
    int flag=0;
    
    for(int i=0;i<n/2;i++)
    {
        if(x[i]==x[n-1])
        continue;
        else
        {
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    cout<<"YES"<<endl;
    if(flag==1)
    cout<<"NO"<<endl;
    
    return 0;
    
}