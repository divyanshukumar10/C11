#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int m,n;
    cin>>m>>n;
    
    int arr[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    
    int sum=0;
    
    int x;
    cin>>x; 

    //to print the sum of elements in a given row
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[x][i];
    }
    
    cout<<sum<<endl;
    return 0;
}
