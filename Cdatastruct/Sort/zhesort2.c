#include<stdio.h>
#include<stdlib.h>
void xsort(int *a,int n);
int zhesort(int *a,int data,int n);
int main(){
printf("折本排序如下：\n");
printf("请输入集合个数：");
int n;
scanf("%d",&n);
int a[n];
int i,j;
for(i=0;i<n;i++){
scanf("%d",(a+i));


}
int data;
printf("请输入查找元素：");
scanf("%d",&data);
printf("查找结果如下：\n");
xsort(a,n);
for(i=0;i<n;i++){
printf("%d ",a[i]);

}
putchar('\n');
int folt=zhesort(a,data,n);
if(folt==-1){

printf("No");

}else{

printf("%d",folt);

}


return 0;
}
void xsort(int *a,int n){
int path,d,i,j,temp;
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
int mid;
int min=0;
int max=n-1;
while(min<=max){
mid=(min+max)/2;
if(data<a[mid]){

printf("%d ",a[mid]);
max=mid-1;

}else if(data>a[mid]){
printf("%d ",a[mid]);
min=mid+1;



}else if(*(a+mid)==data){
printf("%d\n",a[mid]);
return mid+1;

}




}


return -1;

}
