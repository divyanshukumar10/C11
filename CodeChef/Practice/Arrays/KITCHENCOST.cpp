#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int x;
        cin>>x;
        
        int arr[n];
        int arr1[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        
        int cost=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=x)
            cost+=arr1[i];
        }
        
        cout<<cost<<endl;
    }
    
}