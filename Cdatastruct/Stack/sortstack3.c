#include<stdio.h>
int push(int*a,int top,int item);
int pop(int*a,int top);
int main(){
int a[100];
int top=-1;
top=push(a,top,9383773);
top=push(a,top,37733);
top=push(a,top,6666);
top=push(a,top,7763673);
top=push(a,top,1111111);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);
top=pop(a,top);

return 0;
}
int push(int*a,int top,int item){
top++;
a[top]=item;
return top;


}
int pop(int*a,int top){
if(top==-1){
printf("空栈！\n");
return top;
}
else{
int data=a[top];
top--;
printf("%d出栈\n",data);
return top;



}

}