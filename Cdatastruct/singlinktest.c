#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
int elem;
struct Link *next;


}link;
link *initLink();
link *insertElem(link *p,int elem,int add);
link *delElem(link *p,int add);
int selectElem(link *p,int elem);
link *amendElem(link *p,int elem,int newElem);
void display();
int main(){
printf("初始化链表：\n");
link *p=initLink();
display(p);
printf("在第五的位置插入五：\n");
p=insertElem(p,5,4);
display(p);
printf("查找元素2的位置为:\n");
int address=selectElem(p,2);
if(address==-1){
printf("没有该元素");

}else{

printf("元素2的位置为：%d\n",address);
}
printf("更改第三的位置的数据为7：\n");
p=amendElem(p,3,7);
display(p);





return 0;
}
link *initLink(){
link *p=(link*)malloc(sizeof(link));
link *temp=p;
int i;
for(i=1;i<5;i++){
link *a=(link *)malloc(sizeof(link));
a->elem=i;
a->next=NULL;
temp->next=a;
temp=temp->next;


}
return p;
}
link *insertElem(link *p,int elem,int add){
link *temp=p;
int i;
for(i=1;i<add;i++){
temp=temp->next;
if(temp==NULL){
printf("擦入的位置无效！");
return p;
}
}
link *data=(link *)malloc(sizeof(link));
data->elem=elem;
data->next=temp->next;
temp->next=data;
return p;

}
link * delElem(link *p,int add){

link *temp=p;
int i;
for(i=1;i<add;i++){
temp=temp->next;
if(temp->next==NULL){
printf("删除位置无效！\n");
return p;


}
}
link *del=temp->next;
temp->next=temp->next->next;
free(del);
return p;


}

int selectElem(link *p,int elem){
link*t=p;
int i=1;
while(t->next){
t=t->next;
if(t->elem==elem){
return i;


}
i++;




}

return -1;
}
link *amendElem(link *p,int add,int newElem){
link *temp=p;
int i;
for(i=0;i<add;i++){
temp=temp->next;





}
temp->elem=newElem;
return p;




}

void display(link *p){
link *temp=p;
while(temp->next){


temp=temp->next;
printf("%d ",temp->elem);


}



}










