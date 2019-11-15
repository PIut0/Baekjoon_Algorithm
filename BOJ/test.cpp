#include<bits/stdc++.h>
using namespace std;

int check = 1;
int f(string s,int cnt){
    int n =0;
    if(s.size() == 1){
        if((s[0]-'0') % 3 != 0){
            check = 0;
        }
        return cnt;
    }
    for(int i=0;i<s.length();i++){
        n+=s[i]-'0';
    }
    cnt++;
    s = to_string(n);
    return f(s,cnt);
}
int main(){
    string s;
    cin >> s;
    
    printf("%d\n",f(s,0));
    printf("%s",(check==1)?"YES":"NO");
}