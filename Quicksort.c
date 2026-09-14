#include<stdio.h>
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = (low-1);
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
           
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
    }
   
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return(i+1);
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main(){
    int data[]={6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof (data[0]);
    quicksort(data,0,size-1);
    printf("\nSorted array: \n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    return 0;
}
