#include<stdio.h>
int main(){
    int arr[50],n,i,key,count=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the key: ");
    scanf("%d",&key);
    int mid,left=0,right=n-1,flag=0;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key){
            printf("Data found at index %d\n", mid);
            flag=1;
            break;
        }
        else if(arr[mid]<key){
            left=mid+1;
            
            }
        else{
            right=mid-1;
        }
    }
    if(flag=0){
    printf("data not found");
    }
    return 0;
}
