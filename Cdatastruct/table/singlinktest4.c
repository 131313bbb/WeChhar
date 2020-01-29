#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
int item;
struct Link *next;


}link;
link* createTable();
link* insert(link*p,int item);
link* delete(link*p,int index);
int size(link*p);
void print(link*p);
link* updata(link*p,int inndex,int item);
int main(){
link*p=createTable();
p=insert(p,383883);
p=insert(p,363663);
p=insert(p,3663);
p=insert(p,36637);
print(p);
printf("链表总长度为:%d\n",size(p));
printf("更新第一个位置的值为:98474,更新后内容如下：\n");
p=updata(p,0,98474);
print(p);
printf("更新第四个位置的为1333333，更新后的内容如下:\n");
p=updata(p,3,1333333);
print(p);
printf("删除第一个元素，删除后内容如下:\n");
p=delete(p,0);
print(p);
printf("删除第三个元素，删除后内容如下:\n");

p=delete(p,2);
print(p);
return 0;
}
link* createTable(){
link*p=(link *)malloc(sizeof(link));
p->next=NULL;
p->item=-1;


}
link* insert(link*p,int item){
if(p->item==-1){

p->item=item;
return p;
}
link* temp=(link *)malloc(sizeof(link));
temp->item=item;
temp->next=NULL;
link* now=p;
while(now->next!=NULL){
now=now->next;


}
now->next=temp;

return p;


}
link* delete(link*p,int index){
if(p->item==-1){
return p;
}
if(index==0){
p=p->next;
return p;
}
link*temp=p;
int i=1;
while(temp->next!=NULL&&index!=i){
temp=temp->next;
i++;

}
if(index==i)
temp->next=temp->next->next;
return p;




}
link* updata(link*p,int index,int item){

if(index<0||index>=size(p)){

printf("下标出现错误！\n");
return p;

}
link*temp=p;
int i=0;
while(temp->next!=NULL&&i!=index){
temp=temp->next;
i++;



}
if(i==index){

temp->item=item;
return p;
}
return p;



}
int size(link*p){
int size=0;
link*temp=p;
while(temp){
temp=temp->next;
size++;


}
return size;




}
print(link*p){
link*temp=p;
while(temp){

printf("%d ",temp->item);
temp=temp->next;
}
putchar('\n');






}