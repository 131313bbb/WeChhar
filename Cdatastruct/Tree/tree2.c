#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode{
int data;
struct TreeNode *rchild,*lchild;


}Tree;
Tree*createTree(int data){
Tree* tree=(Tree *)malloc(sizeof(Tree));
tree->lchild=NULL,tree->rchild=NULL;
tree->data=data;
return tree;


}
Tree *insertLchild(Tree* tree,int data){






if(tree){
Tree* node=(Tree *)malloc(sizeof(Tree));
node->data=data;
node->lchild=NULL;
node->rchild=NULL;
tree->lchild=node;


return node;
}else
return tree;


}
Tree*insertRchild(Tree* tree,int data){
if(tree){
Tree*node=(Tree *)malloc(sizeof(Tree));
node->data=data;
node->lchild=NULL;
node->rchild=NULL;
tree->rchild=node;
return node;
}else
return tree;


}
void presort(Tree* tree){
if(tree){

printf("%d ",tree->data);

presort(tree->lchild);



presort(tree->rchild);



}
return ;


}
void zhosort(Tree* tree){
if(tree){



presort(tree->lchild);

printf("%d ",tree->data);

presort(tree->rchild);



}



}
void backsort(Tree*tree){
if(tree){

backsort(tree->lchild);


backsort(tree->rchild);

printf("%d ",tree->data);
}


}
int main(){


Tree* tree=createTree(8885);

Tree* l1=insertLchild(tree,677);

Tree* r1=insertRchild(tree,45757858);
Tree* r2=insertLchild(r1,575758);
Tree* l2=insertRchild(r1,465656);
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
