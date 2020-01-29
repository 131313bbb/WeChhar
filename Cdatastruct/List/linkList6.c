#include<stdio.h>
#include<stdlib.h>
typedef struct LinkList{
int data;
struct LinkList*next;


}List;
List* createList();
List* enter(List*rear,int item);
List* outer(List*rear,List*front);
int main(){
List*rear,*front;
rear=front=createList();
rear=enter(rear,88888);
rear=enter(rear,77777);
rear=enter(rear,66666);
rear=enter(rear,55555);
rear=enter(rear,44444);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);


return 0;
}
List*createList(){
List*temp=(List *)malloc(sizeof(List));
temp->next=NULL;
return temp;


}
List*enter(List* rear,int item){
List*temp=(List *)malloc(sizeof(List));
temp->data=item;
temp->next=NULL;
rear->next=temp;
rear=temp;
return rear;


}
List *outer(List*rear,List*front){
if(front->next==NULL){
printf("空队列！");
return rear;

}
List*p=front->next;
front->next=p->next;
printf("%d ",p->data);
if(p==rear){
rear=front;
}

return rear;



}