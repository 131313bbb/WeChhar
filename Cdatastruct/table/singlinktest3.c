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
printf("链表测试如下:\n");
link *p=createTable();
p=insert(p,838484);
p=insert(p,3773);
p=insert(p,474774);
p=insert(p,477585);
printf("链表内容如下：\n");
print(p);
printf("更新第一个位置为789，内容如下：\n");
p=updata(p,0,789);
print(p);
printf("更新第三个位置为477575,内容如下:\n");
p=updata(p,2,477574);
print(p);
printf("此时链表长度为：%d\n",size(p));
printf("删除第一个元素，内容如下:\n");
p=delete(p,0);
print(p);
printf("删除第二个元素，内容如下:");
p=delete(p,1);
print(p);
return 0;
} 
link* createTable(){
link* p=(link *)malloc(sizeof(link));
p->item=-1;
p->next=NULL;




}
link* insert(link*p,int item){
link* temp=(link *)malloc(sizeof(link));
temp->item=item;
temp->next=NULL;
if(p->item==-1){

p->item=item;
return p;
}else{
link* now=(link *)malloc(sizeof(link));
now=p;
while(now->next){

now=now->next;

}
now->next=temp;
return p;
}


}
link* delete(link* p,int item){  
if(p->item==-1){

printf("空的链表！");
return NULL;



}
link*temp=p;     
 if(item==0){

p=p->next;
return p;
}



int i=1;
while(temp->next!=NULL&&i!=item){
temp=temp->next;
i++;


}
if(i==item)
temp->next=temp->next->next;

return p;






}
int size(link *p){
int size=0;
link*temp=(link *)malloc(sizeof(link));
temp=p;
while(temp){
size++;
temp=temp->next;


}
return size;



}
void print(link*p){
link *temp=p;
while(temp){

printf("%d ",temp->item);
temp=temp->next;

}
putchar('\n');


}
link* updata(link*p,int index,int item){
if(index==0){

p->item=item;
return p;

}
link* temp=p;

int i=0;

while(temp&&index!=i){

temp=temp->next;
i++;

}
if(i==index){
temp->item=item;
return p;

}
else{

return NULL;
}







}