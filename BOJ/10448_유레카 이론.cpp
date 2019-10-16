#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    int n;
    int t[50];
    t[0] = 0;
    for(int i=1;i<50;i++){
        t[i] = t[i-1]+i;
    }
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        int x;
        int ck = 0;
        scanf("%d",&x);
        for(int i=1;i<49;i++){
            for(int j=1;j<=i;j++){
                for(int l=1;l<=j;l++){
                    if(t[i]+t[j]+t[l] == x){
                        printf("1\n");
                        ck = 1;
                    }
                    if(ck == 1){
                        break;
                    }
                }
                if(ck == 1){
                    break;
                }
            }
            if(ck == 1){
                break;
            }
        }
        if(ck != 1){
            printf("0\n");
        }
    }
}