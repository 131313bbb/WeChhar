#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
int item;

struct Link *next;




}link;
link * createTable();
link * insert(link*p,int item);
link * delete(link*p,int item);
int indexOf(link*p,int item);
void disprint(link*p);
int size(link*p);
link * updata(link*p ,int index,int item);

int main(){


link*p=createTable();
p=insert(p,6384);
p=insert(p,3993);
disprint(p);
p=insert(p,394493);
p=insert(p,84848);
disprint(p);
printf("线性表总长度为：%d\n",size(p));
updata(p,0,78);
printf("第一个位置更新为78，更新后内容如下：\n");
disprint(p);
updata(p,3,488494);
printf("第四个位置更新为488494，更新内容如下：\n");
disprint(p);
p=delete(p,0);
printf("第一个位置被删除,删除后内容如下：\n");
disprint(p);
p=delete(p,2);
printf("第三个位置被删除，删除后的内容如下：\n");
disprint(p);
return 0;
}
link * createTable(){
link *p=(link *)malloc(sizeof(link));
p->next=NULL;
p->item=-1;


return p;

}
link *insert(link*p,int item){
link* temp=(link*)malloc(sizeof(link));
temp->item=item;
temp->next=NULL;
if(p->item==-1){
p->item=item;
return p;


}else{
link*now=p;

while(now->next!=NULL){
now=now->next;
}

now->next=temp;
return p;

}






}






link* delete(link*p,int item){
if(p->item==-1){


printf("线性表为空");
return NULL;
}

link* temp=p;
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
int size(link*p){
int size=0;

link* temp=p;







while(temp){

size++;
temp=temp->next;


}

return size;







}

link* updata(link*p,int index,int item){
link* temp=(link*)malloc(sizeof(link));
temp->item=item;
temp->next=NULL;
int j=0;
link* now=p;

while(now!=NULL&&j!=index){


now=now->next;
j++;
}
if(j==index){
now->item=item;

return p;
}
else{
return NULL;

}
}
void disprint(link*p){
link*temp=p;

while(temp){
printf("%d ",temp->item);
temp=temp->next;

}

putchar('\n');


}