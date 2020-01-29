#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
int item;

struct Link *next;




}link;
link * createTable();
link * insert(link*p,int item);
link * delelte(link*p,int item);
int indexOf(link*p,int item);
void print(link*p);
int size(link*p);
link * updata(link*p ,int index,int item);

int main(){


link*p=createTable();
p=insert(p,6384);
p=insert(p,3993);
print(p);

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
if(p==NULL){


printf("线性表为空");
return NULL;
}

link* temp=p;

int i=1;
while(temp->next!=NULL&&i!=item){

temp=temp->next;
i++;


}
temp->next=temp->next->next;
return p;




}
int size(link*p){
int size=0;

link* temp=p;







while(temp!=NULL){

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
}
if(j==index){
now->item=item;

return p;
}
else{
return NULL;

}
}
void print(link*p){
link*temp=p;

while(temp){
printf("%d ",temp->item);
temp=temp->next;

}




}