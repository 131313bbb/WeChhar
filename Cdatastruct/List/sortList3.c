#include<stdio.h>
#include<stdlib.h>
#define max 5
int enter(int *a,int front,int rear,int data);
int outer(int *a,int front,int rear);
int main(){
int a[max];
int rear,front;
rear=front=0;
rear=enter(a,front,rear,363664);
rear=enter(a,front,rear,373773);
rear=enter(a,front,rear,66666);
rear=enter(a,front,rear,888888);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);

return 0;
}
int enter(int *a,int front,int rear,int data){
if((rear+1)%max==front){

printf("队列已满!\n");
return rear;

}
a[rear%max]=data;
rear++;
return rear;


}
int outer(int *a,int front,int rear){
if(rear%max==front){
printf("队列为空!\n");

}
printf("%d ",a[front]);
front=(front+1)%max;
return front;

}