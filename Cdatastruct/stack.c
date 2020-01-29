


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAXSIZE 10;


typedef struct arraystack{

int *stack;
int top;


}STACK,*LPSTACK;
void CreateStack(LPSTACK S){

S->stack=(int *)malloc(sizeof(int)*MAXSIZE);
if(S->stack==null)
S->top=-1;


}
int isEmptyStack(LPSTACK S){
   if(S->top==-1){
return 0;




}

return 1;


}
void push(LPSTACK S,int item){
if(S->top==MAXSIZE-1){
  printf("栈满了！");
exit(0);
}
top++;
S->stack[S->top]=item;


}
void pop(LPSTACK S){
if（isEmptyStack()）{
printf("无法出栈！栈为空！");
return ;
}

S->stack[S->top--];


}
int getTop(LPSTACK S){
if(isEmptyStack(S)){
printf("无法出栈\n");
return -1;

}

return S->stack[S->top];

}
int main(){
LPSTACK S=(LPSTACK *)malloc(sizeof(STACK)*MAXSIZE);
CreateStack(S);
push(S,1);
push(S,2);
push(S,4);
while(!IsEmptyStack(S)){

printf("%d",getTop(S));
pop(S);


}

system("pause");
return 0;
}