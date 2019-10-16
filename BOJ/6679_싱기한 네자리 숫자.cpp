#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    int i;
    int n10,n12,n16;
    for(i=1000;i<10000;i++){
        n10 = i%10+(i/10)%10+(i/100)%10+(i/1000)%10;
        n12 = i%12+(i/12)%12+(i/144)%12+(i/1728)%12;
        n16 = i%16+(i/16)%16+(i/256)%16+(i/4096)%16;
        if(n10 == n12 && n10 == n16){
            printf("%d\n",i);
        }
    }
}