#include<stdio.h>
#include<stdlib.h>
#define max 5
int enter(int *a,int front,int rear,int data);
int outer(int *a,int front,int rear);
int main(){
int a[max];
int front,rear;
rear=front=0;
rear=enter(a,front,rear,7776);
rear=enter(a,front,rear,88888);
rear=enter(a,front,rear,99999);
rear=enter(a,front,rear,55555);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);
front=outer(a,front,rear);


return 0;
}
int enter(int *a,int front,int rear,int data){
if((rear+1)%max==front){


printf("队列为空!\n");
return rear;
}
a[rear%max]=data;
rear++;
return rear;


}
int outer(int *a,int front,int rear){
if(rear%max==front){
printf("栈为空!\n");
return front;

}
printf("%d ",a[front]);
front=(front+1)%max;
return front;


}