#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int



int main(){
    char map[101][101];
    int n,m;
    scanf("%d %d",&n,&m);
    while(n!=0 && m!=0){
        for(int i=0;i<n;i++){
            scanf("%s",map[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = 0;
                if(map[i][j] == '.'){
                    if(i>0&&j>0){
                        if(map[i-1][j-1] == '*')    count++;
                    }
                    if(i>0){
                        if(map[i-1][j] == '*')    count++;
                    }
                    if(i>0&&j<m-1){
                        if(map[i-1][j+1] == '*')    count++;
                    }
                    if(j>0){
                        if(map[i][j-1] == '*')    count++;
                    }
                    if(i<n-1&&j>0){
                        if(map[i+1][j-1] == '*')    count++;
                    }
                    if(i<n-1){
                        if(map[i+1][j] == '*')    count++;
                    }
                    if(j<m-1){
                        if(map[i][j+1] == '*')    count++;
                    }
                    if(i<n-1&&j<m-1){
                        if(map[i+1][j+1] == '*')    count++;
                    }
                    map[i][j] = count+'0';
                }
            }
        }   
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%c",map[i][j]);
            }
            printf("\n");
        }
        scanf("%d %d",&n,&m);
    }
}