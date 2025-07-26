/*insertion sort in ascending order */
#include <stdio.h>
void insertion_sort(int arr[],int n);
void print_sorted_array(int arr[],int n);
int main(){
    int arr[100],n,i,j;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);
    printf("The Sorted Array is : ");
    print_sorted_array(arr,n);

    return 0;
}
void insertion_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print_sorted_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}