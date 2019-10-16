#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int main(){
    char arr[51];
    int check[26] = {0,};
    scanf("%s",arr);
    int len = strlen(arr);
    for(int i=0;i<len;i++){
        check[arr[i]-'A']++;
    }
    string result;
    int count = 0;
    int rem = 0;
    for(int i=0;i<26;i++){
        if(check[i]%2 == 1){
            count++;
            rem = i;
        }
        for(int j=0;j<check[i]/2;j++){
            char ch = i+'A';
            result += ch;
        }
        if(count >= 2){
            printf("I'm Sorry Hansoo");
            return 0;
        }

    }
    if(count == 1){
        cout << result;
        printf("%c",rem+'A');
        for(int i=result.size()-1;i>=0;i--){
            cout << result[i];
        }
    }
    else{
        cout << result;
        for(int i=result.size()-1;i>=0;i--){
            cout << result[i];
        }

    }
}