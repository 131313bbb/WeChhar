#include<stdio.h>
#include<stdlib.h>
void xsort(int *a,int n);
void print(int *a,int n);
int main(){
printf("希尔排序测试：\n");
printf("请输入测试元素个数：");
int n,i;
scanf("%d",&n);
int a[n];
for( i=0;i<n;i++){
scanf("%d",(a+i));



}
xsort(a,n);
print(a,n);

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
for(j=i-d;j>0&&temp<a[j];j=j-d){


a[j+d]=a[j];
}
a[j+d]=temp;
printf("%d ",temp);



}



}




}

putchar('\n');



}
void print(int *a,int n){
int i=0;
for(i=0;i<n;i++){

printf("%d ",*(a+i));
}

putchar('\n');

}