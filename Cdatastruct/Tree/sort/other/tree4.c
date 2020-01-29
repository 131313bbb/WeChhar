
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
void enter(Trees*a,Tree*tree);
void pop();
Tree* getTop(Trees*a);
Tree* outList(Trees*a);
void push(Trees*a,Tree*tree);
void print(Tree*tree);
int main(){
Tree*tree=createTree(455);
Tree*l1=insertLchild(tree,56777);
Tree*r1=insertRchild(tree,56666);
Tree*r2=insertRchild(r1,4566);
Tree*l2=insertLchild(r1,45566677);
printf("递归前序遍历如下：\n");
presort(tree);
putchar('\n');
printf("非递归前序遍历如下：\n");
presort1(tree);
putchar('\n');
printf("递归中序遍历如下：\n");
zhosort(tree);
putchar('\n');
printf("非递归中序遍历如下：\n");
zhosort1(tree);
putchar('\n');
printf("递归后序遍历如下：\n");
backsort(tree);
putchar('\n');
printf("非递归后序遍历如下：\n");
backsort1(tree);
putchar('\n');
printf("层序遍历如下：\n");
levelsort(tree);
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
void enter(Trees*a,Tree*tree){

top++;
a[top]=tree;


}
void pop(){

if(top==-1){

return ;
}
top--;

}
Tree*getTop(Trees*a){
if(top==-1){

return NULL;
}
return a[top];


}
void push(Trees*a,Tree*tree){

a[rear]=tree;
rear++;

}
Tree*outList(Trees*a){
Tree*temp=a[front];
front++;
return temp;

}
void presort(Tree*tree){
if(tree){
print(tree);
presort(tree->lchild);
presort(tree->rchild);

}
return ;



}
void print(Tree*tree){
printf("%d ",tree->data);

}
void presort1(Tree*tree){
Tree*a[20];
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
void zhosort(Tree*tree){
if(tree){
zhosort(tree->lchild);
print(tree);
zhosort(tree->rchild);


}

return ;


}
void zhosort1(Tree*tree){

Tree*a[20];
Tree*temp=tree;
top=-1;
while(temp||top!=-1){
if(temp){
enter(a,temp);
temp=temp->lchild;


}else{
temp=getTop(a);
pop();
print(temp);
temp=temp->rchild;

}




}


}

void backsort(Tree*tree){
if(tree){
backsort(tree->lchild);
backsort(tree->rchild);
print(tree);

}

return ;




}


void backsort1(Tree*tree){
Tree*a[20];
top=-1;
Tree*temp=tree;
while(temp||top!=-1){

while(temp){
enter(a,temp);
temp=temp->lchild;

}
temp=getTop(a);
pop();
print(temp);
if(top!=-1&&temp==getTop(a)->lchild){

temp=getTop(a)->rchild;
}else{


temp=NULL;

}


}




}

void levelsort(Tree*tree){
Tree*a[20];
push(a,tree);
Tree*temp;
while(front<rear){
temp=outList(a);

print(temp);
if(temp->lchild!=NULL){
push(a,temp->lchild);
}
if(temp->rchild!=NULL){

push(a,temp->rchild);
}



}




}























