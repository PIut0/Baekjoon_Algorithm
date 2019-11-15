#include<bits/stdc++.h>
<<<<<<< HEAD
#define mp make_pair
#define pb push_back
using namespace std;


priority_queue<pair<int, pair<int, int> > , vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > pq;
int arr[100003];
int conn[100003][2];
int check[100003]={0,};
map <int, int> checkmap;

int main(){
    int n,k,x=-1234567890;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){\
        scanf("%d",&arr[i]);
        int o = arr[i];
        arr[i] = o-x;
        x = o;
        checkmap[i] = i;
        pq.push(mp(arr[i],mp(i-1,i)));
        // printf("%d\n", pq.top().first);
    }

    arr[0] = 1234567890;
    arr[n+1] = 1234567890;

    x = 0;
    while(k--){
        int min;
        int idxl,idxr;
        min = pq.top().first;
        idxl = pq.top().second.first;
        idxr = pq.top().second.second;
        // printf("%d\n",min);

        pq.pop();
        if(check[idxl] == 0 && check[idxr] == 0){
            check[idxl] = 1;
            check[idxr] = 1;
            int sum;
            sum = arr[idxl] + arr[idxr+1]- arr[idxr];
            pq.push(mp(sum,mp(idxl-1,idxr+1)));
            x += min;
            printf("%d\n",min);
        }
        else{
            k++;
        }
    }
    printf("%d",x);
=======
using namespace std;

int main(){

>>>>>>> 7b05050ad0b0b95573be0720202b59cf617093cb
}