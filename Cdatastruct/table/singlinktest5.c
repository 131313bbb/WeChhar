#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
 int item;
struct Link *next;




}link;
link* createTable();
link* insert(link*p,int item);
link* delete(link*p,int index);
link* updata(link*p,int index,int item);
int size(link*p);
void print(link*p);
int main(){
link*p=createTable();
p=insert(p,363663);
p=insert(p,3664);
p=insert(p,3674848);
printf("链表内容如下:\n");
print(p);
printf("链表总长度为%d\n",size(p));
printf("更新第一个元素为123，更新内容如下:\n");
p=updata(p,0,123);
print(p);
printf("更新第三个元素为6666，更新后内容如下:\n");
p=updata(p,2,6666);
print(p);

printf("删除第一个元素，删除后内容如下:\n");
p=delete(p,0);
print(p);
printf("删除第二个元素，删除后内容如下:\n");
p=delete(p,1);
print(p);
return 0;

}
link* createTable(){
link*p=(link *)malloc(sizeof(link));
p->item=-1;
p->next=NULL;

return p;

}

link* insert(link*p,int item){

if(p->item==-1){

p->item=item;
return p;
}
else{
link* temp=(link*)malloc(sizeof(link));
temp->item=item;
temp->next=NULL;
link* now=p;
while(now->next!=NULL){

now=now->next;

}
now->next=temp;
return p;



}



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
printf("下标错误\n");
}

link*temp=p;
int i=0;
while(temp&&i!=index){
temp=temp->next;
i++;


}
if(i==index)
temp->item=item;
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
void print(link*p){
link*temp=p;
while(temp){
printf("%d ",temp->item);

temp=temp->next;
}
putchar('\n');



}