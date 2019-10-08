#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    char map[51][51];
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",&map[i]);
    }
    int cn,cm;
    int cnt = INF;
    cn = n-8;
    cm = m-8;

    for(int i=0;i<=cn;i++){
        for(int j=0;j<=cm;j++){
            int count = 0;
            for(int s=0;s<8;s++){
                for(int k=0;k<8;k++){
                    if((s+k)%2 == 1){
                        if(map[i+s][j+k] == 'W') count+=1;
                    }
                    else{
                        if(map[i+s][j+k] == 'B') count+=1;
                    }
                }
            }
            cnt = (cnt>count)?count:cnt;
            count = 0;
            for(int s=0;s<8;s++){
                for(int k=0;k<8;k++){
                    if((s+k)%2 == 1){
                        if(map[i+s][j+k] == 'B') count+=1;
                    }
                    else{
                        if(map[i+s][j+k] == 'W') count+=1;
                    }
                }
            }
            cnt = (cnt>count)?count:cnt;
        }
    }
    printf("%d",cnt);
}