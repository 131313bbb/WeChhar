#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0;
typedef struct TreeNode{
int data;
struct TreeNode*lchild,*rchild;

}Tree,*Trees;

Tree*createTree(int data);
Tree*insertLchild();
Tree*insertRchild();
void presort(Tree*tree);
void zhosort(Tree*tree);
void backsort(Tree*tree);
void levesort(Tree*tree);
void enter(Trees*a,Tree*tree);
Tree*outer(Trees*a);
int main(){
Tree*tree=createTree(888);
Tree*l1=insertLchild(tree,7374747);
Tree*r1=insertRchild(tree,454545);
Tree*r2=insertRchild(r1,66666);
Tree*l2=insertLchild(r1,77777);
printf("前序遍历如下：\n");

presort(tree);
putchar('\n');
printf("中序遍历如下：\n");
zhosort(tree);
putchar('\n');
printf("后序遍历如下：\n");
backsort(tree);
putchar('\n');
printf("层序遍历如下：\n");
levesort(tree);
putchar('\n');
return 0;

}
Tree*createTree(int data){
Tree*tree=(Tree *)malloc(sizeof(Tree));
tree->rchild=NULL;
tree->lchild=NULL;
tree->data=data;
return tree;

}
Tree*insertLchild(Tree*tree,int data){
if(tree){
Tree*node=(Tree *)malloc(sizeof(Tree));
node->data=data;
node->lchild=NULL;
node->rchild=NULL;

tree->lchild=node;
return node;
}
return tree;




}
Tree*insertRchild(Tree*tree,int data){
if(tree){
Tree*node=(Tree *)malloc(sizeof(Tree));
node->data=data;
node->lchild=NULL;
node->rchild=NULL;
tree->rchild=node;
return node;

}
return tree;


}
void presort(Tree*tree){
if(tree){
printf("%d ",tree->data);
presort(tree->lchild);
presort(tree->rchild);

}
return ;


}
void zhosort(Tree*tree){
if(tree){
zhosort(tree->lchild);
printf("%d ",tree->data);
zhosort(tree->rchild);
}
return ;



}
void backsort(Tree*tree){
if(tree){
backsort(tree->lchild);
backsort(tree->rchild);
printf("%d ",tree->data);

}
return ;




}
void levesort(Tree*tree){

Tree a[20];
enter(a,tree);
while(front<rear){
Tree* temp=outer(a);
printf("%d ",temp->data);
if(temp->lchild!=NULL){

enter(a,temp->lchild);
}
if(temp->rchild!=NULL){
enter(a,temp->rchild);

}



}







}
void enter(Trees*a,Tree*tree){
a[rear]=tree;
rear++;



}
Tree*outer(Trees*a){
Tree*tree=a[front];
front++;
return tree;


}
