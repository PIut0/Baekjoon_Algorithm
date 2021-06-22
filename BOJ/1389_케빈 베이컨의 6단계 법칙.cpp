#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
#define min 1234567890;

int n,m;
vector <vector<int> > v(101);
int check[101];

queue<int> q;

void clear(){
  while(!q.empty()){
    q.pop();
  }
}

void bfs(){
  int d = q.front();
  q.pop();
  // printf("%d %d\n",d,check[d]);
  int size = v[d].size();
  for(int i=0;i<size;i++){
    if(check[d]+1 < check[v[d][i]]){
      q.push(v[d][i]);
      check[v[d][i]] = check[d]+1;
    }
  }
  if(!q.empty()){
    bfs();
  }
}

int foo(int a){
  int result=0;
  q.push(a);
  check[a] = 0;
  bfs();
  for(int i=0;i<n;i++){
    result+=check[i];
  }
  return result;
}

int main(){
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    int x,y;
    scanf("%d %d",&x,&y);
    x--;
    y--;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  int result = 0;
  int result_s = min;
  for(int i=0;i<n;i++){
    int c;
    for(int j=0;j<n;j++){
      check[j] = min; 
    }
    c = foo(i);
    // printf("%d\n",c);
    if(c < result_s){
      result_s = c;
      result = i+1;
    }
  }

  printf("%d",result);
}