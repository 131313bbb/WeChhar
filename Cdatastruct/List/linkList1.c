#include<stdio.h>
#include<stdlib.h>
typedef struct QNode{
int data;
struct QNode *next;

}QNode;
QNode * initQueue(){
QNode *queue=(QNode *)malloc(sizeof(QNode));
queue->next=NULL;
return queue;

}
QNode * enQueue(QNode *rear,int data){

QNode *enElem=(QNode *)malloc(sizeof(QNode));
enElem->data=data;
enElem->next=NULL;
rear->next=enElem;
rear=enElem;
return rear;

}
QNode * DeQueue(QNode * top,QNode *rear){
if(top->next==NULL){
printf("\n队列为空");
return rear;

}
QNode *p=top->next;
printf("%d ",p->data);
top->next=p->next;
if(rear==p){


rear=top;
}
free(p);
return rear;


}
int main(){
QNode *queue,*top,*rear;
queue=top=rear=initQueue();
rear=enQueue(rear,2233);
rear=enQueue(rear,55555);
rear=enQueue(rear,6666);
rear=enQueue(rear,8888);
rear=DeQueue(top,rear);
rear=DeQueue(top,rear);
rear=DeQueue(top,rear);
rear=DeQueue(top,rear);
rear=DeQueue(top,rear);


return 0;

}