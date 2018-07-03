#include <stdio.h>
#include <stdlib.h>
//structure struct
typedef struct linkedlistnode{
  int value;
  struct linkedlistnode* next;
}listnode;
//Declarations of functions
void addNode(listnode*,int);
void deleteNode(listnode*,int);
void sortNodes(listnode*);
int findNode(listnode*,int);
void printReverse(listnode*);
void printList(listnode*);

listnode* root=(listnode*)malloc(sizeof(listnode));


//add node
void addNode(listnode* node,int num){
listnode* mynode=root;
mynode->next=NULL;
mynode->value=num;
while (node->next!=NULL) {
  node=node->next;
}
node->next=mynode;

}
//deleteNode
void deleteNode(listnode* node,int num) {
  if(node==null) break;
 while (node->next!=NULL || (node->next->value!=num)) {
    node=node->next;
  }

  listnode* mynode,delete;
  delete=node->next;
  mynode=node->next->next;
  node->next=mynode;
  free(delete);
}
// sort Nodes

void sortNodes(listnode* node){
int len=0-;
if(node==null) break;
while(node!=null){
mode=node->next;
len++;
  }

  

}
//reverse the list
void printReverse(listnode* node){
  if(node==NULL) break;
printReverse(node->next);
printf("%d\n",node->value);

}
//print the list
void printList(listnode* node){
while (node->next!=NULL) {
  printf("%d\n",node->value);
}
}

int main(int argc, char const *argv[]) {
  addNode(node,5);
  addNode(node,7);
  addNode(node,2);
//printing
printList(node);

  return 0;
}
