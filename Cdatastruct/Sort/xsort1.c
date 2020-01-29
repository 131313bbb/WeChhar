#include<stdio.h>
#include<stdlib.h>
void xsort(int *a,int n);
int main(){
printf("希尔排序测试：\n");
printf("请输入数据集个数：");
int n,i ;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){

scanf("%d",(a+i));

}
xsort(a,n);
for(i=0;i<n;i++){
if(i!=n-1)
printf("%d ",*(a+i));
else{
printf("%d ",*(a+i));
}


}


return 0;
}
void xsort(int *a,int n){
int i,j,temp,path,d;
path=5;
for(d=path;d>0;d=d-2){
for(i=d;i<n;i++){
if(a[i]<a[i-d]){
temp=a[i];
j=0;
for(j=i-d;a[j]>temp&&j>=0;j=j-d){
a[j+d]=a[j];


}
a[j+d]=temp;
printf("%d ",temp);


}



}





}

putchar('\n');


}