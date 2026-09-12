#include<stdio.h>
void bubblesort(int array[],int size){
    int swapped;
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        printf("\nInternal array: \n");
        for(int i=0;i<size;i++){
            printf(" %d ",array[i]);
        }
    }

}
int main(){
    int data[]={6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof (data[0]);
    bubblesort(data,size);
    printf("\nSorted array: \n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    return 0;
}