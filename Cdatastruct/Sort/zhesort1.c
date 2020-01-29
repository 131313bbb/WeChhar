#include<stdio.h>
#include<stdlib.h>
void xsort(int *a,int n);
int zheshort(int *a,int data,int n);
int main(){
printf("折本查找测试如下：\n");
printf("请输入测试元素个数：");
int n,i,data;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",(a+i));


}
printf("请输入查找元素：");
scanf("%d",&data);
printf("查找结果如下：\n");
xsort(a,n);
int folt=zhesort(a,data,n);
if(folt==-1){
printf("No");


}else{
printf("%d\n",folt+1);

}

return 0;
}
void xsort(int *a,int n){

int path,i,j,d,temp;
path=5;
for(d=path;d>0;d=d-2){
for(i=d;i<n;i++){
if(a[i]<a[i-d]){
temp=a[i];
j=0;
for(j=i-d;j>0&&a[j]>temp;j=j-d){
a[j+d]=a[j];


}
a[j+d]=temp;


}



}



}




}
int zhesort(int *a,int data,int n){
int min,mid,max;
min=mid=0;
max=n-1;
while(min<=max){
mid=(min+max)/2;
if(data<a[mid]){
max=mid-1;
printf("%d",*(a+mid));
}else if(data>a[mid]){
min=mid+1;
printf("%d ",*(a+mid));

}else if(data==a[mid]){
printf("%d\n",a[mid]);
return mid;


}



}
return -1;

}