#include<stdio.h>
#include<stdlib.h>
void ksort(intb *a,int begin,int end);
int main(){
printf("快速排序测试如下：\n");
printf("请输入测试元素：");
int n;
scanf("%d",&n);
int data[n];
int i=0;
for(i=0;i<n;i++){
scanf("%d",(a+i));
}
ksort(data,0,n-1);
for(i=0;i<n;i++){
if(i!=n-1)
printf("%d ",*(a+i));
else
printf("%d",*(a+i));
}
putchar('\n');


return 0;
}
void ksort(int *data,int begin,int end){
if(begin>=end||data==NULL){

return ;
}
int j=end;
int i=end;
int mid=data[begin];
while(i!=j){

  while(data[j]>=mid&&i<j)
{
j--;
}
while(data[i]<=mid&&i<j){

i++

}
if(i<j){

int temp=data[j];
data[j]=data[i];
data[i]=temp;

}

}
data[begin]=data[i];
data[i]=mid;
System.out.print(i+" ");
ksort(data,begin,i-1);
ksort(data,i+1,end);



}