#include <bits/stdc++.h>
using namespace std;

int main() {
    const int pricesmallroom(20);
    const int pricelargeroom(30);
    const float tax(10);
    
    int sr;
    int lr;
    cin>>sr;
    cin>>lr;
    
    cout<<"cost: Rs "<<((pricesmallroom * sr) + (pricelargeroom * lr)) * tax<<endl;
}
