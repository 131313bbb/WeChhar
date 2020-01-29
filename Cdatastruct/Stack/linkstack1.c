#include<stdio.h>
#include<stdlib.h>
typedef struct Stack{
int data;
struct Stack *next;

}Stack;
Stack* push(Stack*stack,int item);
Stack* pop(Stack*stack);
int main(){
Stack* stack=NULL;
int a[100];
int top=1;
stack=push(stack,377477);
stack=push(stack,33838);
stack=push(stack,283873);
stack=push(stack,363663);
stack=push(stack,38838);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
return 0;
}
Stack* push(Stack*stack,int item){
Stack* line=(Stack *)malloc(sizeof(stack));
line->data=item;
line->next=stack;
stack=line;
return stack;

}
Stack*pop(Stack*stack){
if(stack){
Stack*temp=stack;
stack=stack->next;
printf("%d出栈",temp->data);
if(stack){
printf("栈顶元素为%d\n",stack->data);

}
else{

printf("栈已为空！\n");

}
free(temp);


}else{
printf("栈为空！\n");
return stack;



}
return stack;


}
