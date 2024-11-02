#include<stdio.h>
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selectionsort(int *arr,int n){
    int minindex;
    for(int i=0;i<n-1;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
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
        selectionsort(arr,n);
        printArray(arr,n);
        return 0;
}
