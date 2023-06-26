#include<stdio.h>

void read(int [] ,int );
void print(int [],int);
void sort(int [],int);
int BinarySearch(int [],int,int);


int main(){
int n,key,r;
printf("How many elements you want to enter : ");
scanf("%d",&n);
int a[n];
printf("Enter elements into array : ");
read(a,n);
printf("Enter element to be searched : ");
scanf("%d",&key);
printf("\nElements in the array : ");
print(a,n);
sort(a,n);
printf("\nElements in the sorted order : ");
print(a,n);
r=BinarySearch(a,n,key);
if(r==-1)
printf("\nElement not found\n");
else
printf("\nElement found at position %d in sorted array\n",r+1);

return 0;
}

void read(int a[],int n){
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 }

 void print(int a[],int n){
  for(int i=0;i<n;i++)
  printf("%d ",a[i]);
  }
 
 void sort(int a[],int n){
 int t;
 for(int i=n-1;i>0;i--){
 for(int j=0;j<=i-1;j++){
 if(a[j]>a[j+1]){
  t=a[j];
  a[j]=a[j+1];
  a[j+1]=t;
 }
 }
 }
}

int BinarySearch(int a[],int n,int key){
int l=0, h=n-l,mid;
 while(l<=h){
 mid =(l+h)/2;
 if(a[mid]==key)
 return mid;
 else if(key<a[mid]){
 h=mid-1;
 }
 else {
 l=mid+1;
 }
}
 return -1;
}
