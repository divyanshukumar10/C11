#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        
        int x;
        cin>>x;
        
        int ans=0;
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            ans=arr[i];
        }
        
        if(ans==x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        return 0;
}