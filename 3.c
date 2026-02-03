#include<stdio.h>
int main(){
int n,i,j,count=0;
printf("enter the size of array:");
scanf("%d", &n);
int arr[n];
printf("enter the elements of array:");
for(i=0;i<n;i++){
    scanf("%d", &arr[i]);    
}
printf("\n");
printf("the formed array is:\n");
for(i=0;i<n;i++){
    printf("%d\t", arr[i]);
}
printf("enter the target value:");
scanf("%d", &j);
for(i=0;i<n;i++){
    count++;
 if(arr[i]==j){
 printf("the target value is at index %d", i);
 break;
 }
}
printf("the count at which it is found is: %d", count);
return 0;
}
