//Sorting an array in decreasing order
#include <stdio.h>
void bubblesort(int arr[],int n);
void printarray(int arr[],int n);
int main(){
    int arr[100],n,j,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    bubblesort(arr,n);
    printf("\nSorted Array is : ");
    printarray(arr,n);
    return 0;
}
void bubblesort(int arr[],int n){
    int i,j,temp,swapped;
    for(i=0;i<n-1;i++){
        swapped = 0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped = 0){
            break;
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}