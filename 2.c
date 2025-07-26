/*Bubble Sort in ascending order*/
#include <stdio.h>
void bubble_sort(int arr[],int n);
void print_bubble_sort(int arr[],int n);
int main(){
    int arr[100],n,i,j;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubble_sort(arr,n);
    printf("The Sorted Array is : ");
    print_bubble_sort(arr,n);
    return 0;
}
void bubble_sort(int arr[],int n){
    int swapped,temp,i,j;
    for(i=0;i<n-1;i++){
        swapped = 0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                swapped = 1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
void print_bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
