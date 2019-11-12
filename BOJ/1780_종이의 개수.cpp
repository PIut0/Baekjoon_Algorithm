#include <iostream>
#include <string>

using namespace std;

int paper[3000][3000];
int ans[3];

int chk(int y, int x, int size){
	int tmp = paper[y][x];
	for(int i = y; i < y+size; i++){
		for(int j = x; j < x+size; j++){
			if(tmp != paper[i][j]){
				return 0;
			}
		}
	}
	ans[tmp+1]++;
	return 1;
}

void dq(int y, int x, int size){
	if(chk(y, x, size)){
		return;
	}
	dq(y, x, size/3);
	dq(y, x+size/3, size/3);
	dq(y, x+2*size/3, size/3);
	dq(y+size/3, x, size/3);
	dq(y+size/3, x+size/3, size/3);
	dq(y+size/3, x+2*size/3, size/3);
	dq(y+2*size/3, x, size/3);
	dq(y+2*size/3, x+size/3, size/3);
	dq(y+2*size/3, x+2*size/3, size/3);
}

int main(){
	int N; cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> paper[i][j];
		}
	}
    dq(0,0,N);
	for(int i = 0; i < 3; i++){
		printf("%d\n", ans[i]);
	}
}