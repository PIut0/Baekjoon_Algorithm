#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int info;
  struct node *link;
} Node;

int main(void) {
  Node *head = NULL;

  head = (Node *)malloc(sizeof(Node));
  head -> info = 0;
  head -> link = NULL;
  Node *nodes[5];
  nodes[0] = (Node *)malloc(sizeof(Node));
  head -> link = nodes[0];
  for(int i=0;i<4;i++){
     nodes[i+1] = (Node *)malloc(sizeof(Node));
     scanf("%d",&nodes[i]->info);
     nodes[i] -> link = nodes[i+1];
  }
  scanf("%d",&nodes[4]->info);
  nodes[4] -> link = NULL;
  Node *cur = head -> link -> link -> link;
  while(cur != NULL){
     printf("%d\n",cur->info);
     cur = cur->link;
  }

  return 0;
}