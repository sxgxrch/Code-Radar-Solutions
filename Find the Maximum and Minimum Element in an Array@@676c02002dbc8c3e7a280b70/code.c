#include<stdio.h>
int main(){
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    if(arr[i]>max){
        max=arr[i];
    }
    
    if(arr[i]<min){
        min=arr[i];
    }
    printf("%d",max);
    printf("%d",min);
    return 0;
}