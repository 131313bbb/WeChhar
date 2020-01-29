#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
int flot[MAX_SIZE];
void print(int *a,int n);
int jude(int *flot,int n);
void back(int i,int *a,int n);
int main(){
int i,j,n;
for(i=0;i<20;i++){
flot[i]=0;
}
printf("回溯算法测试求集合的子集\n");
printf("请输入集合的个数：");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("集合的第%d个元素为：",i+1);
scanf("%d",&a[i]);
}
printf("原集合为：");
print(a,n);
printf("其所有子集为：\n");
back(0,a,n);
return 0;
}
void print(int *a,int n){
putchar('{');
int i=0;
for(i=0;i<n;i++){
if(i!=n-1){
printf("%d,",a[i]);
}else{
printf("%d",a[i]);
}

}
putchar('}');
putchar('\n');



}
int jude(int *flot,int n){
int temp=-1;
int i=0;
for(i=0;i<n;i++){
if(flot[i]==1){
temp=i;
}

}
return temp;
}
void back(int i,int *a,int n){
int j;
if(i==n){
putchar('{');
for(j=0;j<n;j++){
if(flot[j]==1){
int temp=jude(flot,n);
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