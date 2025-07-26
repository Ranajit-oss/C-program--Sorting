/*Selection Sorting in ascending order */
#include <stdio.h>
void selection_sort(int arr[],int n);
void print_sorted_array(int arr[],int n);
int main(){
    int arr[100],i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    selection_sort(arr,n);
    printf("The Sorted Array in ascending order : ");
    print_sorted_array(arr,n);
}
void selection_sort(int arr[],int n){
    int i,j,pos,min;
    for(i=0;i<n-1;i++){
        min =arr[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                min =arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}
void print_sorted_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}