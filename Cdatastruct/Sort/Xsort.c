#include<stdio.h>
#include<stdlib.h>
void Xrsort(int *a,int n);
int main(){
int n;
scanf("%d",&n);
int i=0;
int a[n];
for(i=0;i<n;i++){

scanf("%d",&a[i]);


}
Xrsort(a,n);

for(i=0;i<n;i++){
if(i!=n-1)
printf("%d ",*(a+i));
else{

printf("%d\n",a[i]);
}
}

return 0;
}
void Xrsort(int *a,int n){
int path=5;
int i,j,temp,d;
for(d=path;d>0;d=d-2){
for(i=d;i<n;i++){
if(a[i]<a[i-d]){
 temp=a[i];
 j=0;
for(j=i-d;j>0&&temp<a[j];j=j-d){

a[j+d]=a[j];

}
a[j+d]=temp;



}




}





}





}