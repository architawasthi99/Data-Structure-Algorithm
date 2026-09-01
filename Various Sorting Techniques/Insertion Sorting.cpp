#include<stdio.h>
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n");
}
void insertionsort(int *arr,int n){
    int key,i,j;
    for(i=1;i<n;i++){
        key=arr[i];;
        j=i-1;
        while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
        }
    arr[j+1]=key;
    }
}
int main(){
    int arr[50],n,i;
    printf("enter the array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        printArray(arr,n);
        insertionsort(arr,n);
        printArray(arr,n);
        return 0;
}
