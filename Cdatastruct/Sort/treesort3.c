#include<stdio.h>
#include<stdlib.h>
void treesort(int*data,int n);
void treeadjust(int*data,int index,int length);
void swap(int*data,int i,int j);
void print(int*data,int n);
int main(){
printf("堆排测试如下：\n");
printf("堆排测试元素个数为：");
int n;
scanf("%d",&n);
int data[n];
printf("请输入堆排测试元素：");
int i=0;
for(i=0;i<n;i++){
printf("第%d个元素为：",i+1);
scanf("%d",(data+i));

}
printf("堆排序结果如下：\n");
treesort(data,n);
print(data,n);
return 0;
}
void treesort(int*data,int n){
int i,j,length;
length=n-1;
for(i=length/2;i>=0;i--){
treeadjust(data,i,length);
}
print(data,n);
while(length>=0){

swap(data,0,length);
length--;
treeadjust(data,0,length);
}


}
void treeadjust(int*data,int index,int length){
int left,right,j;
while((left=2*index+1)<=length){
right=left+1;
j=left;
if(j<length&&data[left]<data[right])
j++;
if(data[j]>data[index]){
swap(data,j,index);
}else
break;
index=j;



}


}
void swap(int*data,int i,int j){
int temp=data[i];
data[i]=data[j];
data[j]=temp;
}
void print(int*data,int n){
int i;
for(i=0;i<n;i++){
printf("%d ",data[i]);
}
putchar('\n');
}