/*Merge Sort ---- Ascending Order */
#include <stdio.h>
void merge_sort(int arr[],int len);
void merge_sort_recursion(int arr[],int l,int r);
void merge_sorted_arrays(int arr[],int l,int m,int r);
void print_array(int arr[],int len);

int main(){
    int arr[100],i,len;
    printf("Enter the value of len : ");
    scanf("%d",&len);

    printf("Enter the elements in the array : ");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,len);
    printf("The sorted array in ascending order is : ");
    print_array(arr,len);

}
void merge_sort(int arr[],int len){
    merge_sort_recursion(arr,0,len-1);
}
void merge_sort_recursion(int arr[],int l,int r){
    int m;
    if(l<r){
        m = l+ (r-l)/2;
        merge_sort_recursion(arr,l,m);
        merge_sort_recursion(arr,m+1,r);
        merge_sorted_arrays(arr,l,m,r);
    }
}
void merge_sorted_arrays(int arr[],int l,int m,int r){
    int left_len = m+1-l;
    int right_len = r-m;
    int temp_left[left_len],temp_right[right_len],i,j;

    for(int i=0;i<left_len;i++){
        temp_left[i] = arr[l+i];
    }
    for(int j=0;j<right_len;j++){
        temp_right[j] = arr[m+1+j];
    }
    i=0;
    j=0;
    for(int k=l;k<=r;k++){
        if((i<left_len) && (j>=left_len || temp_left[i]<temp_right[j])){
            arr[k]=temp_left[i];
            i++;
        }
        else{
            arr[k]= temp_right[j];
            j++;
        }
    }

}
void print_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

