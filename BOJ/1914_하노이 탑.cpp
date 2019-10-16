#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

void hanoi(int n, int a, int b){
    int c;
    if(n <= 1){
        printf("%d %d\n",a,b);
    }
    else{
        c = 6-a-b;
        hanoi(n-1,a,c);
        printf("%d %d\n",a,b);
        hanoi(n-1,c,b);
    }
}

int main(){
    int count;
    int n;
    scanf("%d",&n);
    if(n <= 20){
        count = pow(2,n)-1;
        printf("%d\n",count);
        hanoi(n,1,3);
    }
    else{
        int arr[50];
        for(int i=0;i<50;i++){
            arr[i] = -1;
        }
        arr[0] = 1;
        for(int i=0;i<n;i++){
            int check[50] ={0,};
            for(int j=0;arr[j]!=-1;j++){
                arr[j] *= 2;
                if(arr[j] >= 10){
                    arr[j] -= 10;
                    check[j+1] = 1;
                }
            }
            for(int j=0;j<50;j++){
                if(check[j] == 1){
                    if(arr[j] == -1){
                        arr[j] = 1;
                    }
                    else{
                        arr[j] += 1;
                    }
                }
            }
        }
        int idx=0;
        arr[0] -= 1;
        for(;arr[idx]!=-1;idx++);
        for(int i=idx-1;i>=0;i--){
            printf("%d",arr[i]);
        }
    }
}