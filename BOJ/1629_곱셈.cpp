#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll fastfoo(ll a, ll b, ll c){
    if(b == 0){
        return 1;
    }
    ll val;
    val = fastfoo(a,b/2,c)%c;
    val = val * val % c;
    if(b%2 == 1){
        val *= a;
        val %= c;
    }
    val %= c;
    return val;
}

int main(){
    ll a,b,c; cin >> a >> b >> c;
    ll val;
    val = fastfoo(a,b,c);
    printf("%lld",val);
}
