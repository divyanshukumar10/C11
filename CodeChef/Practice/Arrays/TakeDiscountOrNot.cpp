#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,coupon,discount;
        
        cin>>n>>coupon>>discount;
        
        int arr[n];
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        
        int bill=0;
        
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]-discount;
            if(arr[i]<0)
            {
                arr[i]=0;
            }
            bill+=arr[i];
        }
        
        bill+=coupon;
        
        if(bill<sum)
        cout<<"COUPON"<<endl;
        else
        cout<<"NO COUPON"<<endl;
    }

    return 0;
}