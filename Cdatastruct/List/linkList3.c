#include<stdio.h>
#include<stdlib.h>
typedef struct LinkList{
int data;
struct LiskList*next;


}List;
List* createList();
List*enter(List*rear,int data);
List*outer(List*rear,List*front);
int main(){
List*rear,*list,*front;
rear=front=createList();
rear=enter(rear,38484848);
rear=enter(rear,47748785);
rear=enter(rear,88888);
rear=enter(rear,99999);
rear=enter(rear,44444);
rear=outer(front,rear);
rear=outer(front,rear);
rear=outer(front,rear);
rear=outer(front,rear);
rear=outer(front,rear);


return 0;
}
List*enter(List*rear,int data){
List* temp=(List *)malloc(sizeof(List));
temp->next=NULL;
temp->data=data;
rear->next=temp;
rear=temp;

return rear;

}
List* createList(){
List* temp=(List *)malloc(sizeof(List));
temp->next=NULL;
return temp;


}
List* outer(List*front,List*rear){
if(front->next==NULL){

printf("空列表！\n");
return rear;

}
List*p=front->next;
printf("%d ",p->data);
front->next=p->next;
if(p==rear){
front=rear;
}
free(p);
return rear;


}