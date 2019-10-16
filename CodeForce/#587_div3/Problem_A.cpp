#include<stdio.h>

int main(){
    char key[200001];
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%c",&key[i]);
    }
    int count=0;
    int acount=0;
    int bcount=0;
    for(int i=1;i<=n;i++){
        (key[i]=='a')?acount++:bcount++;
        // printf("%d %d\n",acount,bcount);
        if(acount == bcount + 2){
            key[i] = 'b';
            acount--;
            bcount++;
            count++;
        }
        else if(bcount== acount + 2){
            key[i] = 'a';
            acount++;
            bcount--;
            count++;
        }
    }
    printf("%d",count);
    // printf("%d",count);
    for(int i=0;i<=n;i++){
        printf("%c",key[i]);
    }
}