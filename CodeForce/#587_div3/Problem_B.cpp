#include<stdio.h>
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

vector<pair<int,int> > v;

int main(){
    
    
    int n;
    int arr[1001];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int x;
        
        scanf("%d",&x);
        v.pb(mp(-x,i+1));

    }

    sort(v.begin(),v.begin()+n);

    long long int count=0;
    for(int i=0;i<n;i++){
        count += -v[i].first * i + 1;
    }
    printf("%lld\n",count);
    for(int i=0;i<n;i++){
        printf("%d ",v[i].second);
    }
}