#include<bits/stdc++.h>
using namespace std;

int arr[101][101];
int twin[6][3];
int check[6];
int n,m,k;
int result = 1234567890;

int arr_sum(int n, int m, int arr[101][101]){
    int lest=1234567890;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        lest = min(lest,sum);
    }
    return lest;
}

void spin(int twin[6][3],int check[6], int arr[101][101], int k){
    int spin_arr[101][101];
    int spin_save[101][101];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            spin_arr[i][j] = arr[i][j];
            spin_save[i][j] = arr[i][j];
        }
    }
    for(int i=0;i<k;i++){
        int r,c,s;
        r = twin[check[i]][0]-1;
        c = twin[check[i]][1]-1;
        s = twin[check[i]][2];

        for(int j=s;j>0;j--){
            spin_arr[r-j][c-j] = spin_save[r-j+1][c-j];
            spin_arr[r+j][c-j] = spin_save[r+j][c-j+1];
            spin_arr[r-j][c+j] = spin_save[r-j][c+j-1];
            spin_arr[r+j][c+j] = spin_save[r+j-1][c+j];
            for(int l=r-j+1;l<r+j;l++){
                spin_arr[l][c-j] = spin_save[l+1][c-j];
                spin_arr[l][c+j] = spin_save[l-1][c+j];
            }
            for(int l=c-j+1;l<c+j;l++){
                spin_arr[r-j][l] = spin_save[r-j][l-1];
                spin_arr[r+j][l] = spin_save[r+j][l+1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                spin_save[i][j] = spin_arr[i][j];
            }
        }
    }
    result = min(result,arr_sum(n,m,spin_arr));
}

void johab(int k,int c,int check[6]){
    if(k == c){
        spin(twin,check,arr,k);
        return;
    }
    int check_save[6];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            check_save[j] = check[j];
        }
        if(check_save[i] == -1){
            check_save[i] = c;
            johab(k,c+1,check_save);
        }
    }
}

int main(){
    scanf("%d %d %d",&n,&m,&k);
    memset(check,-1,sizeof(check));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<k;i++){
        scanf("%d %d %d",&twin[i][0],&twin[i][1],&twin[i][2]);
    }
    johab(k,0,check);
    printf("%d",result);
}