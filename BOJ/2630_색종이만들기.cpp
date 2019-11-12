#include<stdio.h>
#pragma warning(disable:4996)

int blue,white;
int arr[65][65];
int check(int x, int y, int n) {
   int c = arr[y-n][x-n];
   for (int i = y-n; i < y; i++) {
      for (int j = x-n; j < x; j++) {
         if (arr[i][j] != c) {
            return -1;
         }
      }
   }
    if(arr[y-n][x-n] == 1){
        blue++;
    }
    else{
        white++;
    }
   return 1;
}

void combine(int x, int y, int n) {
   int ch = check(x, y, n);
   if (ch == -1) {
      combine(x-n/2, y-n/2, n / 2);
      combine(x, y-n/2, n / 2);
      combine(x-n/2, y, n / 2);
      combine(x, y, n / 2);
   }
    return;
}

int main() {
   int n;
   scanf("%d", &n);
    blue = white = 0;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &arr[i][j]);
      }
   }
   combine(n, n, n);
    printf("%d\n%d",white,blue);
}