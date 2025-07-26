/*insertion sort in descending order */
#include <stdio.h>
void insertion_sort(int arr[],int n);
void print_insertion_sort(int arr[],int n);
int main(){
    int arr[100],i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);
    printf("The sorted array is : ");
    print_insertion_sort(arr,n);

    return 1;
}
void insertion_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print_insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}