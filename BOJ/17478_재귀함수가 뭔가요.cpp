#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1234567890
#define ll long long int

int n;
void Indent(int k){
    for(int i=0;i<k*4;i++){
        printf("_");
    }
}

void WhatIsRecursionFunction(int c){
    Indent(c);
    printf("\"����Լ��� ������?\"\n");
    
    if(c == n){
        Indent(c);
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        Indent(c);
        printf("��� �亯�Ͽ���.\n");
        return;
    }
    Indent(c);
    printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
    Indent(c);
    printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
    Indent(c);
    printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
    WhatIsRecursionFunction(c+1);
    Indent(c);
    printf("��� �亯�Ͽ���.\n");
}

int main(){
    scanf("%d",&n);
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    WhatIsRecursionFunction(0);
}