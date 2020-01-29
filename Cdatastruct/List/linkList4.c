#include<stdio.h>
#include<stdlib.h>
typedef struct LinkList{
int data;
struct LinkList*next;
}Link;
Link* createList();
Link* enter(Link* rear,int item);
Link* outer(Link* rear,Link* front);
int main(){
Link* rear;
Link* front;
rear=front=createList();
rear=enter(rear,89888);
rear=enter(rear,99999);
rear=enter(rear,66666);
rear=enter(rear,44444);
rear=enter(rear,33333);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
rear=outer(rear,front);
return 0;
}
Link* createList(){
Link* temp=(Link *)malloc(sizeof(Link));
temp->next=NULL;
return temp;


}
Link* enter(Link* rear,int item){
Link* temp=(Link *)malloc(sizeof(Link));
temp->next=NULL;
temp->data=item;
rear->next=temp;
rear=temp;
return rear;
}
Link* outer(Link* rear,Link* front){
if(front->next==NULL){
printf("列表为空\n");
return rear;
}
Link* p=front->next;
printf("%d ",p->data);
if(p==rear){

rear=front;
}
front->next=p->next;
return rear;



}