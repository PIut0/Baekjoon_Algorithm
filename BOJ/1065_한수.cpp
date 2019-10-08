#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    
    if(n < 100){
        printf("%d",n);
    }
    else{
        for(int i=100;i<=n;i++){
            if(i%100/10-i%10 == i/100-i%100/10){
                count += 1;
            }
        }
        printf("%d",99+count);
    }
}