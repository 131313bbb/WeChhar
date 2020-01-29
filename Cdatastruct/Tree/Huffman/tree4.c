#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct Huffman{

int weight,lchild,rchild,parent;

}Node,*Tree;
Tree*createTree(int n);
void print(Tree*tree,int n);
int main(){
int n,i,j;
printf("创建哈夫曼树,请输入节点数目：\n");
scanf("%d",&n);
Tree*tree=createTree(n);
printf("打印哈夫曼树，内容如下：\n");
print(tree,n);



return 0;
}
Tree*createTree(int n){
int i,j,num;
num=2*n-1;
Tree*tree=(Tree)malloc(num*sizeof(Node));
for(i=0;i<num;i++){
tree[i]=(Node *)malloc(sizeof(Node));
tree[i]->rchild=-1;
tree[i]->lchild=-1;
tree[i]->parent=-1;


}
printf("哈夫曼树节点赋值\n");
for(i=0;i<n;i++){
printf("第%d个节点权值为：",i+1);
scanf("%d",&(tree[i]->weight));
}

int x1,x2,v1,v2;
for(i=0;i<n-1;i++){
x1=x2=0;
v1=v2=INT_MAX;
for(j=0;j<n+i;j++){
if(tree[j]->weight<v1&&tree[j]->parent==-1){
v2=v1;
x2=x1;
v1=tree[j]->weight;
x1=j;

}else if(tree[j]->weight<v2&&tree[j]->parent==-1){
v2=tree[j]->weight;
x2=j;

}




}

tree[n+i]->lchild=x1;
tree[n+i]->rchild=x2;
tree[n+i]->weight=v1+v2;
tree[x1]->parent=n+i;
tree[x2]->parent=n+i;
}
return tree;
}
void print(Tree*tree,int n){
int i;
printf("打印哈夫曼树，内容如下：\n");
printf("下标\t权值\t左孩子\t右孩子\t父亲\n");
for(i=0;i<2*n-1;i++){
printf("%d\t%d\t%d\t%d\t%d\n",i,tree[i]->weight,tree[i]->lchild,tree[i]->rchild,tree[i]->parent);
}


}