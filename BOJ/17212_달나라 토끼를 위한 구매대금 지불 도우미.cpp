#include<bits/stdc++.h>
using namespace std;

int main(){
    int MAX = 1234567890;
    int coin[100001];
    coin[0] = 0;
    coin[1] = 1;
    coin[2] = 1;
    coin[3] = 2;
    coin[4] = 2;
    coin[5] = 1;
    coin[6] = 2;
    coin[7] = 1;
    int n;
    scanf("%d",&n);
    for(int i=8;i<=n;i++){
        coin[i] = MAX;
        coin[i] = min(coin[i],coin[i-7]+1);
        coin[i] = min(coin[i],coin[i-5]+1);
        coin[i] = min(coin[i],coin[i-2]+1);
        coin[i] = min(coin[i],coin[i-1]+1);
    }
    printf("%d",coin[n]);
}