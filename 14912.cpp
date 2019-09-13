#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main() {
  int n,t,cnt;
  cnt = 0;
  scanf("%d %d",&n, &t);
  for(int i=1; i<=n; i++){
    for(int j=i; j>0; j=j/10){
      if(j%10 == t)
        cnt++;
    }
  }
  
  printf("%d",cnt);
}