#include<stdio.h>

int pan[26][26];

int diag1(int y, int x){
  int d = pan[y][x];
  int check = 1;
  for(int i=0;i<5;i++){
    if(pan[y+i][x+i] != d)  check = 0;
  }
  if(pan[y-1][x-1] == d || pan[y+5][x+5] == d)  check = 0;
  return check;
}
int diag2(int y, int x){
  int d = pan[y][x];
  int check = 1;
  for(int i=0;i<5;i++){
    if(y-i < 0 || pan[y-i][x+i] != d)  check = 0;
  }
  if(pan[y+1][x-1] == d || (y-5 >= 0 && pan[y-5][x+5] == d))  check = 0;
  return check;
}
int row(int y, int x){
  int d = pan[y][x];
  int check = 1;
  for(int i=0;i<5;i++){
    if(pan[y][x+i] != d)  check = 0;
  }
  if(pan[y][x-1] == d || pan[y][x+5] == d)  check = 0;
  return check;
}
int col(int y, int x){
  int d = pan[y][x];
  int check = 1;
  for(int i=0;i<5;i++){
    if(pan[y+i][x] != d)  check = 0;
  }
  if(pan[y-1][x] == d || pan[y+5][x] == d)  check = 0;
  return check;
}

int main(){
  for(int i=0;i<26;i++){
    for(int j=0;j<26;j++){
      pan[i][j] = 0;
    }
  }
  for(int i=0;i<19;i++){
    for(int j=0;j<19;j++){
      scanf("%d",&pan[i+1][j+1]);
    }
  }
  int result,rx,ry;
  result = 0;
  for(int i=1;i<=19;i++){
    for(int j=1;j<=19;j++){
      if(pan[i][j] != 0){
        if(diag1(i,j) || diag2(i,j) || row(i,j) || col(i,j)){
          result = pan[i][j];
          rx = j;
          ry = i;
        }
      }
    }
  }
  if(result == 0){
    printf("%d",0);
  }
  else{
    printf("%d\n",result);
    printf("%d %d",ry,rx);
  }
}