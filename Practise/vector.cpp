#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector <int> v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0;i<N;i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}