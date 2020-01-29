#include<stdio.h>
#include<stdlib.h>
int top=-1,rear=0,front=0;
typedef struct TreeNode{
int data;
struct TreeNode*lchild,*rchild;
}Tree,*Trees;
Tree*createTree(int data);
Tree*insertLchild(Tree*tree,int data);
Tree*insertRchild(Tree*tree,int data);
void presort(Tree*tree);
void zhosort(Tree*tree);
void backsort(Tree*tree);
void print(Tree*tree);
void pop();
void enter(Trees*a,Tree*tree);
Tree*getTop(Trees*a);
void zhosort1(Tree*tree);
void levelsort(Tree*tree);
void push(Trees*a,Tree*tree);
Tree*out(Trees*a);
void postOrder(Tree*tree);
int main(){
Tree*tree=createTree(8784847);
Tree*l1=insertLchild(tree,485);
Tree*r1=insertRchild(tree,7788);
Tree*r2=insertRchild(r1,475775);
Tree*l2=insertLchild(r1,77744);
printf("非递归前序遍历如下：\n");
presort(tree);
putchar('\n');
printf("递归前序遍历如下：\n");
presort(tree);
putchar('\n');
printf("递归中序遍历如下：\n");
zhosort(tree);
putchar('\n');
printf("非递归中序遍历如下：\n");
zhosort1(tree);
putchar('\n');
printf("递归的后序遍历如下：\n");
backsort(tree);
putchar('\n');
printf("非递归后序遍历如下：\n");
postOrder(tree);
putchar('\n');
printf("递归层序遍历如下：\n");
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
Tree*temp=(Tree *)malloc(sizeof(Tree));
temp->data=data;
temp->lchild=NULL;
temp->rchild=NULL;
tree->rchild=temp;
return temp;

}
return tree;



}
void presort(Tree*tree){


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
void presort1(Tree*tree){
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
void zhosort1(Tree*tree){
Tree*a[20];
top=-1;
Tree*temp;
temp=tree;

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
printf("%d ",tree->data);
}
return ;



}

void levelsort(Tree*tree){
Tree*a[20];
push(a,tree);
while(front<rear){
Tree*temp=out(a);
print(temp);
if(temp->lchild!=NULL){
push(a,temp->lchild);

}
if(temp->rchild!=NULL){
push(a,temp->rchild);
}



}




}
void push(Trees*a,Tree*tree){
a[rear]=tree;
rear++;

}
Tree*out(Trees*a){
Tree*tree=a[front];
front++;
return tree;

}




void postOrder(Tree*tree){
Tree*a[20];
Tree*p=tree;


p=tree;
while(p||top!=-1){
while(p){
enter(a,p);


p=p->lchild;


}
p=getTop(a);
pop();

print(p);
if(top!=-1&&p==getTop(a)->lchild){
p=getTop(a)->rchild;
}
else{
p=NULL;
}


}
}