#include<stdio.h>
#include<stdlib.h>
void ksort(int *a,int begin,int end);
void print(int *a,int n);
int main(){
printf("快排测试如下\n");
int n;
printf("请输入快排元素个数：");
scanf("%d",&n);
int a[n];
int i=0;
for(i=0;i<n;i++){
printf("请输入%d个元素\n",i+1);
int data;
scanf("%d",&data);
a[i]=data;

}

ksort(a,0,n-1);
putchar('\n');
printf("快排结果入下：\n");
print(a,n);
return 0;

}
void ksort(int *a,int begin,int end){
if(begin>=end||a==NULL){

return ;


}
int i=begin;
int j=end;
int temp=a[begin];
while(i<j){
while(a[j]>=temp&&i<j){
j--;
}
while(a[i]<=temp&&i<j){

i++;
}
if(i<j){
int t=a[i];
a[i]=a[j];
a[j]=t;

}




}
a[begin]=a[i];
a[i]=temp;
printf("%d ",i);
ksort(a,begin,i-1);
ksort(a,i+1,end);


}
void print(int *a,int n){
int i=0;
for(i=0;i<n;i++){
printf("%d ",*(a+i));
}
putchar('\n');

}