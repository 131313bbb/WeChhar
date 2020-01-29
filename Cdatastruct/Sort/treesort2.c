#include<stdio.h>
#include<stdlib.h>
void treesort(int*data,int n);
void treeAdjust(int*data,int index,int length);
void swap(int*data,int i,int j);
void print(int*data,int n);
int main(){
printf("堆排序测试如下：\n");
printf("请输入堆排序的元素个数");
int n;
scanf("%d",&n);
int data[n];
printf("堆排序元素进行赋值：\n");
int i;
for(i=0;i<n;i++){
printf("第%d个元素为：\n",i+1);
scanf("%d",(data+i));


}
printf("堆排序结果如下：\n");
treesort(data,n);
print(data,n);

return 0;
}
void treesort(int*data,int n){
int i,j,k;
int length=n-1;
for(i=length/2;i>=0;i--){

treeAdjust(data,i,length);

}
print(data,n);
while(length>0){
swap(data,0,length);
length--;
treeAdjust(data,0,length);

}



}
void print(int*data,int n){
int i;
for(i=0;i<n;i++)
printf("%d ",*(data+i));
putchar('\n');

}
void treeAdjust(int*data,int index,int length){
int left,right,j;
while((left=2*index+1)<=length){

right=left+1;
j=left;
if(j<length&&data[left]<data[right]){
j++;
}
if(data[j]>data[index]){
swap(data,j,index);
}else{
break;
}
index=j;

}



}
void swap(int*data,int i,int j){
int temp=data[i];
data[i]=data[j];
data[j]=temp;


}
