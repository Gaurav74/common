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
  while (node->next!=NULL || (node->next->value!=num)) {
    node=node->next;
  }
  if(node==NULL) break;
  listnode* mynode,delete;
  delete=node->next;
  mynode=node->next->next;
  node->next=mynode;
  free(delete);
}
// sort Nodes

void sortNodes(listnode* node){


}
//reverse the list
void printReverse(listnode* node){
  if(node==NULL) break;
printf("%d\n",node->value);
printReverse(node->next);
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
