#include<stdio.h>
#include<stdlib.h>
int rear=0,front=0,top=-1;
typedef struct TreeNode{
int data;
struct TreeNode*lchild,*rchild;

}Tree,*Trees;
Tree*createTree(int data);
Tree*insertLchild(Tree*tree,int data);
Tree*insertRchild(Tree*tree,int data);
void presort(Tree*tree);
void presort1(Tree*tree);
void zhosort(Tree*tree);
void zhosort1(Tree*tree);
void backsort(Tree*tree);
void backsort1(Tree*tree);
void levelsort(Tree*tree);
void pop();
Tree*getTop(Trees*a);
void print(Tree*tree);
void enter(Trees*a,Tree*tree);
int main(){
Tree*tree=createTree(36636);
Tree*l1=insertLchild(tree,737737);
Tree*r1=insertRchild(tree,7775);
	Tree*l2=insertLchild(l1,3664);
Tree*r2=insertRchild(l1,64664);
Tree*r3=insertRchild(r1,54546);
Tree*l3=insertLchild(r1,46646);
printf("前序遍历如下：\n");
presort(tree);
putchar('\n');
printf("非递归前序遍历：\n");
presort1(tree);
putchar('\n');

return 0; 
}
Tree*createTree(int data){
Tree*tree=(Tree *)malloc(sizeof(Tree));
tree->lchild=NULL;
tree->rchild=NULL;
tree->data=data;
return tree;


}
Tree*insertLchild(Tree*tree,int data){


if(tree){
Tree*node=(Tree *)malloc(sizeof(Tree));
node->lchild=NULL;
node->rchild=NULL;
node->data=data;
tree->lchild=node;
return node;



}
return tree;

}

Tree*insertRchild(Tree*tree,int data){
if(tree){
Tree*node=(Tree *)malloc(sizeof(Tree));
node->lchild=NULL;
node->rchild=NULL;
node->data=data;
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
void presort1(Tree*tree){
Tree*a[20];
top=-1;
Tree*temp;
enter(a,tree);
while(top!=-1){
temp=getTop(a);
pop();
while(temp){
print(temp);
if(temp->rchild){

enter(a,temp->rchild);
}
temp=temp->lchild;

}


}

}
void pop(){
if(top==-1){
return ;
}
top--;

}
void print(Tree*tree){
printf("%d ",tree->data);

}
Tree*getTop(Trees*a){
return a[top];

}
void enter(Trees*a,Tree*tree){
top++;
a[top]=tree;

}