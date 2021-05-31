#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n,c;

int v[15];
int arr[15];
char test[15];

void foo(int d){
  if(n == d){
    int ja,mo;
    ja = mo = 0;
    for(int i=0;i<n;i++){
      if(test[arr[i]] == 'a' || test[arr[i]] == 'e' || test[arr[i]] == 'i' || test[arr[i]] == 'o' || test[arr[i]] == 'u'){
        ja++;
      }else{
        mo++;
      }
    }
    if(mo < 2 || ja < 1)  return;
    for(int i=0;i<n;i++){
      printf("%c",test[arr[i]]);
    }
    printf("\n");
    return;
  }
  for(int i=0;i<c;i++){
    if(!v[i] && (d == 0 || arr[d-1] < i)){
      v[i] = 1;
      arr[d] = i;
      foo(d+1);
      v[i] = 0;
    }
  }
}

int main(){
  scanf("%d %d",&n,&c);
  for(int i=0;i<c;i++){
    cin >> test[i];
  }
  for(int i=0;i<15;i++){
    v[i] = 0;
  }
  sort(test,test+c);
  foo(0);
}