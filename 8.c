/*SORT AN ARRAY USING Merge sort,Bubble sort,selection sort,insertion sort in ascending order*/


#include <stdio.h>
void bubble_sort(int arr[],int len);
void print_bubblesort_array(int arr[],int len);

void insertion_sort(int arr[],int len);
void print_insertionsort_array(int arr[],int len);

void selection_sort(int arr[],int len);
void print_selectionsort_array(int arr[],int len);

void merge_sort(int arr[],int len);
void merge_sort_recursion(int arr[],int l,int r);
void merge_sorted_array(int arr[],int l,int m,int r);
void print_mergesort_array(int arr[],int len);

int main(){
    int arr[100],len,i,j;
    printf("Enter the value of len : ");
    scanf("%d",&len);

    printf("Enter the elements in the array : ");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    bubble_sort(arr,len);
    printf("The sorted array by bubble sort method is : ");
    print_bubblesort_array(arr,len);

    insertion_sort(arr,len);
    printf("\nThe Sorted Array using insertion sort method is : ");
    print_insertionsort_array(arr,len);

    selection_sort(arr,len);
    printf("\nThe Sorted Array using selection sort method is : ");
    print_selectionsort_array(arr,len);

    merge_sort(arr,len);
    printf("\nThe Sorted Array using merge sort method is : ");
    print_mergesort_array(arr,len);

}
void bubble_sort(int arr[],int len){
    int i,j,swapped,temp;
    for(i=0;i<len-1;i++){
        swapped = 0;
        for(j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped =1;
            }
        }
        if(swapped ==0){
            break;
        }
    }
}
void print_bubblesort_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void insertion_sort(int arr[],int len){
    int i,j,key;
    for(i=1;i<len;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j] = arr[j+1];
            j--;
        }
    }
}
void print_insertionsort_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void selection_sort(int arr[],int len){
    int i,j,min,temp,pos;
    for(i=0;i<len-1;i++){
        min = arr[i];
        pos = i;
        for(j=i+1;j<len;j++){
            if(arr[j]<min){
                min = arr[j];
                pos = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[pos];
        arr[pos] = min;
    }
}
void print_selectionsort_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void merge_sort(int arr[],int len){
    merge_sort_recursion(arr,0,len-1);
}
void merge_sort_recursion(int arr[],int l,int r){
    int m;
    if(l<r){
        m = l + (r-l)/2 ;
        merge_sort_recursion(arr,l,m);
        merge_sort_recursion(arr,m+1,r);
        merge_sorted_array(arr,l,m,r);
    }
}
void merge_sorted_array(int arr[],int l,int m,int r){
    int left_len = m+1-l;
    int right_len = r-m;
    int temp_left[left_len],temp_right[right_len],i,j,k;

    for(i=0;i<left_len;i++){
        temp_left[i] = arr[l+i];
    }
    for(j=0;j<right_len;j++){
        temp_right[j] = arr[m+1+j];
    }

    i=0,j=0;
    for(k=l;k<=r;k++){
        if((i<left_len) && (j>=right_len || temp_left[i]<temp_right[i])){
            arr[k]=temp_left[i];
            i++;
        }
        else{
            arr[k]=temp_right[j];
            j++;
        }
    }
}
void print_mergesort_array(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

