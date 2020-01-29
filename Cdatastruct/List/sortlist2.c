#include<stdio.h>
#define max 5
int enter(int *a,int front,int rear,int data);
int outer(int *a,int front,int rear);
int main(){
int a[max];
int front,rear;
rear=front=0;
rear=enter(a,front,rear,74774);
rear=enter(a,front,rear,377474);
rear=enter(a,front,rear,9999);
rear=enter(a,front,rear,6666);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);


return 0;
}
int enter(int *a,int front,int rear,int data){
if(front==(rear+1)%max){
printf("空间已满！\n");
return rear;

}
a[rear%max]=data;
rear++;
return rear;



}
int outer(int *a,int front,int rear){
if(front==rear%max){
printf("队列为空!\n");
return front;

}
printf("%d ",a[front]);
front=(front+1)%max;
return front;



}
