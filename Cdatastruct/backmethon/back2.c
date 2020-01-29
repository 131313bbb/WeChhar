#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
int flot[MAX_SIZE];
void back(int i,int*a,int n);
void print(int *a,int n);
int jude(int *a,int n);
int main(){
int n,i,j;
printf("回溯算法测试：\n");
printf("请输入集合元素个数：");


scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("集合的第%d个元素为：",i+1);
scanf("%d",&a[i]);
flot[i]=0;
}
printf("原集合为：");
print(a,n);
printf("它的所有子集如下：\n");
back(0,a,n);


return 0;
}
void print(int *a,int n){
int i,j,k;
putchar('{');
for(i=0;i<n;i++){
if(i!=n-1)
printf("%d,",a[i]);
else
printf("%d",a[i]);
}
putchar('}');
putchar('\n');
}
int jude(int *a,int n){
int temp=-1,i;
for(i=0;i<n;i++){
if(a[i]==1){
temp=i;
}

}

return temp;
}
void back(int i,int*a,int n){
int j,k;
if(i==n){
putchar('{');
for(j=0;j<n;j++){

int temp=jude(flot,n);
if(flot[j]==1){
if(temp!=j)
printf("%d,",a[j]);
else{
printf("%d",a[j]);
}
}





}

putchar('}');
putchar('\n');

}else{
flot[i]=1;back(i+1,a,n);
flot[i]=0;back(i+1,a,n);



}



}