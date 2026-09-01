#include<stdio.h>
int main(){
    int arr[50],n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("SORTED ARRAY:-\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
