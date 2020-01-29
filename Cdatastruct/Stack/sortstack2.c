#include<stdio.h>
int push(int*a,int top,int item);
int pop(int*a,int top);
int main(){
int a[100];
int top=-1;
top=push(a,top,28283);
top=push(a,top,37774);
top=push(a,top,3644);
top=push(a,top,9999);
top=push(a,top,66666);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
return 0;
}
int push(int *a,int top,int item){
top++;
a[top]=item;
return top;

}
int pop(int *a,int top){
if(top==-1){
printf("空栈！\n");
return top;

}else{
printf("%d出栈\n",a[top]);
top--;
return top;


}


}