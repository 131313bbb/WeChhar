#include<stdio.h>
#include<stdlib.h>
typedef struct linkedStack{
int item;
struct linkedStack* next;


}Stack;
Stack* push(Stack*stack,int item);
Stack* pop(Stack*stack);
int main(){
Stack*stack=NULL;
stack=push(stack,1234);
stack=push(stack,364664);
stack=push(stack,664);
stack=push(stack,464645);
stack=push(stack,374774);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
stack=pop(stack);
return 0; 



}
Stack*push(Stack*stack,int item){
Stack* temp=(Stack *)malloc(sizeof(Stack));
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
printf("栈顶为%d\n",stack->item);


}else{
printf("栈顶为空!\n");

}
free(temp);

}else{


printf("栈为空！\n");

return stack;
}
return stack;

}