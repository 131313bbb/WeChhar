#include<stdio.h>
#include<stdlib.h>
typedef struct LinkStack{
int item;
struct LinkStack*next;

}Stack;
Stack*push(Stack*stack,int item);
Stack*pop(Stack*stack);
int main(){
Stack*stack=NULL;
stack=push(stack,73657);
stack=push(stack,447747);
stack=push(stack,377374);
stack=push(stack,838747);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);

return 0;
}
Stack*push(Stack*stack,int item){
Stack*temp=(Stack *)malloc(sizeof(stack));
temp->item=item;
temp->next=stack;
stack=temp;
return stack;


}
Stack*pop(Stack*stack){
if(stack){
Stack*temp=stack;
printf("%d出栈",temp->item);
stack=stack->next;
if(stack){
printf("栈顶元素为%d\n",stack->item);
}else{

printf("栈顶元素为空！\n");

}
free(temp);


}else{

printf("栈为空！\n");
return stack;
}

return stack;
}
