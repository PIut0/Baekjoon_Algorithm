#include<stdio.h>
#include<stdlib.h>

#define swap( a, b ) int temp = a; a = b; b = temp;  

int none[9] = {2,3,8,0,4,7,6,5,1};
int input[9];
int goal[9] = {1,2,3,8,0,4,7,6,5};

void print_display(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",input[i*3+j]);
    }
    printf("\n");
  }
}

int isWin(){
  int check = 1;
  for(int i=0;i<9;i++){
    if(input[i] != goal[i]) check = 0;
  }
  return check;
}

int check(int *arr){
  int count = 0;
  for(int i=0;i<9;i++){
    if(arr[i] != goal[i]) count++;
  }
  return count;
}

int* up(){
  int zero_position;
  for(int i=0;i<9;i++){
    if(input[i] == 0) zero_position = i;
  }
  if(zero_position / 3 < 1) return none;
  else{
    int *up_arr;
    up_arr= (int *)malloc(sizeof(int)*9);
    for(int i=0;i<9;i++){
      up_arr[i] = input[i];
    }
    swap(up_arr[zero_position],up_arr[zero_position-3]);
    return up_arr;
  }
}
int* down(){
  int zero_position;
  for(int i=0;i<9;i++){
    if(input[i] == 0) zero_position = i;
  }
  if(zero_position / 3 > 1) return none;
  else{
    int *down_arr;
    down_arr= (int *)malloc(sizeof(int)*9);
    for(int i=0;i<9;i++){
      down_arr[i] = input[i];
    }
    swap(down_arr[zero_position],down_arr[zero_position+3]);
    return down_arr;
  }
}
int* left(){
  int zero_position;
  for(int i=0;i<9;i++){
    if(input[i] == 0) zero_position = i;
  }
  if(zero_position % 3 < 1) return none;
  else{
    int *left_arr;
    left_arr= (int *)malloc(sizeof(int)*9);
    for(int i=0;i<9;i++){
      left_arr[i] = input[i];
    }
    swap(left_arr[zero_position],left_arr[zero_position-1]);
    return left_arr;
  }
}
int* right(){
  int zero_position;
  for(int i=0;i<9;i++){
    if(input[i] == 0) zero_position = i;
  }
  if(zero_position % 3 > 1) return none;
  else{
    int *right_arr;
    right_arr= (int *)malloc(sizeof(int)*9);
    for(int i=0;i<9;i++){
      right_arr[i] = input[i];
    }
    swap(right_arr[zero_position],right_arr[zero_position+1]);
    return right_arr;
  }
}

int main(void) {
  for(int i=0;i<9;i++){
    scanf("%d",&input[i]);
  }
  int last = -1;
  while(1){
    printf("\n");
    print_display();

    if(isWin()){
      break;
    }
    int *u,*d,*l,*r;
    u = up();
    d = down();
    l = left();
    r = right();


    int* next;
    next = none;
    if(last != 0 && check(next) > check(u)){
      next = u;
      last = 1;
    }
    if(last != 1 && check(next) > check(d)){
      next = d;
      last = 0;
    }
    if(last != 2 && check(next) > check(l)){
      next = l;
      last = 3;
    }
    if(last != 3 && check(next) > check(r)){
      next = r;
      last = 2;
    }
    for(int i=0;i<9;i++){
      input[i] = next[i];
    }
    // char c = getchar();
  }
}