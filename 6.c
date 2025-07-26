/*selection sort in descending order */
#include <stdio.h>
void selection_sort(int arr[],int n);
void print_sorted_array(int arr[],int n);
int main(){
    int arr[100],n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    selection_sort(arr,n);
    printf("The Sorted Array is : ");
    print_sorted_array(arr,n);
}
void selection_sort(int arr[],int n){
    int i,j,pos,min,temp;
    for(i=0;i<n-1;i++){
        pos = i;
        min = arr[i];
        for(j=i+1;j<n;j++){
            if(min<arr[j]){
                min = arr[j];
                pos = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}
void print_sorted_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}