#include<stdio.h>
#include<stdlib.h>
typedef struct Linklist{
int data;
struct Linklist*next;


}List;
List* createList();
List*enter(List* rear,int data);
List*outer(List* top,List* rear);
int main(){
List*queue,*top,*rear;
queue=top=rear=createList();
rear=enter(rear,353553);
rear=enter(rear,366666);
rear=enter(rear,88888);
rear=enter(rear,55555);
rear=outer(top,rear);
rear=outer(top,rear);
rear=outer(top,rear);
rear=outer(top,rear);
rear=outer(top,rear);


return 0;
}
List* createList(){

List*queue=(List *)malloc(sizeof(List));
queue->next=NULL;
return queue;

}
List*enter(List* rear,int data){
List* temp=(List *)malloc(sizeof(List));
temp->data=data;
rear->next=temp;
rear=temp;
return rear;

}
List*outer(List*top,List*rear){
if(top->next==NULL){


printf("列队为空！\n");
return rear;
}
List*p=top->next;
printf("%d ",p->data);
top->next=p->next;
if(rear==p){

rear=top;

}
free(p);
return rear;




}