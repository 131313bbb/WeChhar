#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode{
int data;
struct TreeNode*lchild,*rchild;
}Tree;
Tree*createTree(int data);
Tree*insertLchild(Tree*tree,int data);
Tree*insertRchild(Tree*tree,int data);
void presort(Tree*tree);
void zhosort(Tree*tree);
void backsort(Tree*tree);
int main(){
Tree*tree=createTree(88848);
Tree*l1=insertLchild(tree,474747);
Tree*r1=insertRchild(tree,5868);
Tree*r2=insertRchild(l1,5766);
Tree*l2=insertLchild(l1,474740);
Tree*l3=insertLchild(r1,55757);
Tree*r3=insertRchild(r1,888888);
printf("前序遍历如下：\n");
presort(tree);
putchar('\n');
printf("中序遍历如下：\n");
zhosort(tree);
putchar('\n');
printf("后序遍历如下：\n");
backsort(tree);
putchar('\n');

return 0;
}
Tree*createTree(int data){
Tree*tree=(Tree *)malloc(sizeof(Tree));
tree->data=data;
tree->lchild=NULL;
tree->rchild=NULL;
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
void presort(Tree *tree){
if(tree){

printf("%d ",tree->data);
presort(tree->lchild);
presort(tree->rchild);


}

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



}