#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum=0;

    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum<<endl;
    return 0;
}