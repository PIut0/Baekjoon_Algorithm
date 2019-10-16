#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    int key[10];
    int sum = 0;
    vector<int> v;
    for(int i=0;i<9;i++){
        scanf("%d",&key[i]);
        sum += key[i];
    }
    for(int i=0;i<8;i++){
        for(int j=1;j+i<9;j++){
            if(sum-key[i]-key[i+j] == 100){
                for(int l=0;l<9;l++){
                    if(l == i || l == i+j) continue;
                    v.pb(key[l]);
                }
                sort(v.begin(),v.end());
                for(int l=0;l<7;l++){
                    printf("%d\n",v[l]);
                }
                return 0;
            }
        }
    }
}