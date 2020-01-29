#include<stdio.h>
#include<stdlib.h>
typedef struct lineStack{
int data;
struct lineStack *next;


}lineStack;
lineStack* push(lineStack* stack,int item);
lineStack *pop(lineStack *stack);
int main(){

lineStack* stack=NULL;
stack=push(stack,1);
stack=push(stack,2);
stack=push(stack,3);
stack=push(stack,4);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
return 0;


}
lineStack* push(lineStack*stack,int item){
lineStack *line=(lineStack*)malloc(sizeof(lineStack));
line->data=item;
line->next=stack;
stack=line;
return stack;


}
lineStack*pop(lineStack* stack){
if(stack){
lineStack *p=stack;
stack=stack->next;
printf("%d出栈\n",p->data);
if(stack){
printf("栈顶元素为%d\n",stack->data);


}else{
printf("栈已空\n");
}
free(p);


}else{
printf("栈内没有元素");
return stack;


}
return stack;

}