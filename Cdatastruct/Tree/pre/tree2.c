#include<stdio.h>
#include<string.h>
#define TElemType int
typedef struct linkTree{
int data;
struct linkTree *rchild,*lchild;


}Tree,*Trees;
void CreateTree(Trees *T){
(*T)->data=1;
(*T)->lchild=(Tree *)malloc(sizeof(Tree));
(*T)->rchild=(Tree *)malloc(sizeof(Tree));
(*T)->lchild->data=2;
(*T)->lchild->lchild=(Tree *)malloc(sizeof(Tree));
(*T)->lchild->rchild=(Tree *)malloc(sizeof(Tree));
(*T)->lchild->rchild->data=5;
(*T)->lchild->rchild->lchild=NULL;
(*T)->rchild->data=3;
(*T)->rchild->lchild=(Tree *)malloc(sizeof(Tree));
(*T)->rchild->lchild->data=6;
(*T)->rchild->lchild->lchild=NULL;
(*T)->rchild->lchild->rchild=NULL;
(*T)->rchild->rchild->data=7;
(*T)->rchild->rchild->lchild=NULL;
(*T)->rchild->rchild->rchild=NULL;
(*T)->lchild->lchild->data=4;
(*T)->lchild->lchild->lchild=NULL;
(*T)->lchild->lchild->rchild=NULL;






}
void print(Tree* t){

printf("%d ",t->data);

}
void presort(Trees T){

if(T){
print(T);
presort(T->lchild);
presort(T->rchild);


}

return ;

}
void zhosort(Trees T){
if(T){
zhosort(T->lchild);
print(T);
zhosort(T->rchild);



}

return ;


}
void backsort(Trees T){
if(T){
backsort(T->lchild);
backsort(T->rchild);
print(T);



}

return ;


}
int main(){
Trees tree;
CreateTree(&tree);
printf("先序遍历\n");
presort(tree);
putchar('\n');
printf("中序遍历\n");

zhosort(tree);
putchar('\n');
printf("后序遍历\n");
backsort(tree);
putchar('\n');

return 0;

}