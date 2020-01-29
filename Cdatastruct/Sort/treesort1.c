#include<stdio.h>
#include<stdlib.h>
int*headsort(int *a,int n);
int*headAdjust(int*a,int i,int len);
int*swap(int*a,int i,int len);
int main(){
printf("大鼎堆排序测试如下：\n");
printf("请输入元素个数：");
int n;
scanf("%d",&n);
printf("请输入排序元素内容\n");
int i=0;
int a[n];
for(i=0;i<n;i++){
printf("第%d个元素为",i+1);
scanf("%d",(a+i));
}
headsort(a,n);
for(i=0;i<n;i++){
printf("%d ",a[i]);
}

putchar('\n');

return 0;
}
int*headsort(int*a,int n){
int len=n-1;
int temp=0;
int i=0;
for(i=len/2;i>=0;i--){



headAdjust(a,i,len);
}
for(i=0;i<n;i++){

printf("%d ",*(a+i));
}
putchar('\n');



while(len>=0){

swap(a,0,len);
len--;
headAdjust(a,0,len);

}
return a;
}
int*headAdjust(int*a,int i,int len){
int left,right,j;
while((left=2*i+1)<=len){

right=left+1;
j=left;
if(j<len&&a[left]<a[right])
j++;
if(a[i]<a[j])
swap(a,i,j);
else
break;
i=j;

}
return a;
}
int*swap(int*a,int i,int j){



int temp=a[j];
a[j]=a[i];
a[i]=temp;
return a;



}