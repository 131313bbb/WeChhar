#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
typedef char ElemType;
typedef struct Snode{
ElemType data;
int parent;


}Node;
typedef struct BigTree{

Node* node[20];
int n; 

}Tree;
Tree* createTree(){
int i,j;
char ch;
Tree*tree=(Tree *)malloc(sizeof(Tree));
 int n;
for(i=0;i<20;i++){
tree->node[i]=(Tree *)malloc(sizeof(Tree));


}
printf("请输入节点数：\n");
scanf("%d",&n);
printf("请输入节点的值及双亲的下标：\n");
tree->n=n;

for(i=0;i<n;i++){
getchar();
scanf("%c %d",&ch,&j);
tree->node[i]->data=ch;
tree->node[i]->parent=j;



}
return tree;



}
void findParent(Tree*tree){

char a;
int isfind=0;
printf("请输入要查询的节点值：\n");
getchar();
scanf("%c",&a);
int i;
for(i=0;i<tree->n;i++){
if(tree->node[i]->data==a){

isfind=1;
int ad=tree->node[i]->parent;
printf("%c的父节点为%c,存储的位置下标为%d",a,tree->node[ad]->data,ad);
break;
}


}
if(isfind==0){
printf("树种无此节点");

}

}
int main(){
int i;

Tree*tree=createTree();
findParent(tree);
return 0;




}
