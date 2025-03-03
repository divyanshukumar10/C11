#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[i]=arr[i]*2;
            arr[i+1]=0;
            i++;
        }
    }
    
    int count =0;
    
    int res[n];
    
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            res[count]=arr[i];
            count++;
        }
    }
    
    for(int i=count;i<n;i++)
    {
        res[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}