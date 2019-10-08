#include<stdio.h>
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

vector<pair<int,int> > v;

int main(){
    int wh1[2][2];
    int bl1[2][2];
    int bl2[2][2];

    scanf("%d %d %d %d",&wh1[0][0],&wh1[0][1],&wh1[1][0],&wh1[1][1]);
    scanf("%d %d %d %d",&bl1[0][0],&bl1[0][1],&bl1[1][0],&bl1[1][1]);
    scanf("%d %d %d %d",&bl2[0][0],&bl2[0][1],&bl2[1][0],&bl2[1][1]);

    int can = 0;
    if(wh1[0][0] < bl1[0][0] && wh1[0][0] < bl2[0][0])  can = 1;
    if(wh1[0][1] < bl1[0][1] && wh1[0][1] < bl2[0][1])  can = 1;
    if(wh1[1][0] > bl1[1][0] && wh1[1][0] > bl2[1][0])  can = 1;
    if(wh1[1][1] > bl1[1][1] && wh1[1][1] > bl2[1][1])  can = 1;
        // can = 0;
    if(bl1[0][0] <= bl2[0][0]){
        if(bl1[1][0] < wh1[1][0] && bl1[1][1] < wh1[1][1]){
            if(!(bl2[0][0] <= wh1[0][0] && bl2[0][1] <= wh1[0][1] && bl2[1][0] >= wh1[1][0] && wh1[1][1] >= bl2[1][1])){
                can = 1;
            }
        }
        else if(bl1[1][0] < wh1[1][0] && bl1[1][1] >= wh1[1][1]){
            if(!(bl2[0][0] <= bl1[1][0] && bl2[0][1] <= wh1[0][1] && bl2[1][0] >= wh1[1][0] && bl2[1][1] >= wh1[1][1])){
                can = 1;
            }
        }
        else if(bl1[1][0] >= wh1[1][0] && bl1[1][1] < wh1[1][1]){
            if(!(bl2[0][1] <= bl1[1][1] && bl2[0][0] <= wh1[0][0] && bl2[1][0] >= wh1[1][0] && bl2[1][1] >= wh1[1][1])){
                can = 1;
            }
        }
    }else{
        if(bl2[1][0] < wh1[1][0] && bl2[1][1] < wh1[1][1]){
            if(!(bl1[0][0] <= wh1[0][0] && bl1[0][1] <= wh1[0][1] && bl1[1][0] >= wh1[1][0] && wh1[1][1] >= bl1[1][1])){
                can = 1;
            }
        }
        else if(bl2[1][0] < wh1[1][0] && bl2[1][1] >= wh1[1][1]){
            if(!(bl1[0][0] <= bl2[1][0] && bl1[0][1] <= wh1[0][1] && bl1[1][0] >= wh1[1][0] && bl1[1][1] >= wh1[1][1])){
                can = 1;
            }
        }
        else if(bl2[1][0] >= wh1[1][0] && bl2[1][1] < wh1[1][1]){
            if(!(bl1[0][1] <= bl2[1][1] && bl1[0][0] <= wh1[0][0] && bl1[1][0] >= wh1[1][0] && bl1[1][1] >= wh1[1][1])){
                can = 1;
            }
        }
    }
    if(can == 0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}