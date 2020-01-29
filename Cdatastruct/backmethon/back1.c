#include<stdio.h>
#define MAX_SIZE 20
int flot[MAX_SIZE];
void back(int i,int n,int*a);
void print(int*a,int n);
int indexOfjude(int*a,int n);
int main(){
int n,i,j,k;

printf("回溯算法测试：\n");
printf("请输入集合元素个数：");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
flot[i]=0;
printf("集合的第%d个元素为：",i+1);
scanf("%d",&a[i]);
}

printf("原集合如下：\n");
print(a,n);
printf("集合的所有子集如下：\n");
back(0,n,a);
return 0;
}
void back(int i,int n,int *a){
int j;
if(i==n){
putchar('{');
for(j=0;j<n;j++){
if(flot[j]==1){

int temp=indexOfjude(flot,n);
if(temp!=-1&&flot[temp]==1&&j==temp){

printf("%d",a[j]);
}
else
printf("%d,",a[j]);

}

}
putchar('}');
putchar('\n');


}else{

flot[i]=1;back(i+1,n,a);
flot[i]=0;back(i+1,n,a);

}




}
void print(int*a,int n){
int i;
putchar('{');
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
int indexOfjude(int*a,int n){
int temp=-1;
int i;
for(i=0;i<n;i++){

if(a[i]==1){
temp=i;

}

}


return temp;
}