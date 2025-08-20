#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 
struct Array
{
    int* array;
    int size;
    int length;
};

void setArray(struct Array* arr,int length,...){
    va_list args;
    va_start(args,length);
    arr->array = (int*)malloc(length* sizeof(int));
    arr->length = length;
    for (size_t i =0; i < length; i++)
    {
        arr->array[i] = va_arg(args,int);
    }

}

static inline void setSize(struct Array* arr,int size){
    arr->size = size;
}

int binarySearch(const struct Array* arr,int key){
    int l,mid,h;
    l =0;
    h = arr->length-1;
    while (l<=h)
    {
       mid = (l+h)/2;
       if (key == arr->array[mid])
       {
         return mid;
       }
       else if (key < arr->array[mid]){
        h = mid-1; 
       }
       else{
        l = mid+1;
       }
    }
    return -1;


}

int main(int argc, char const *argv[])
{
    struct Array arr;
    setArray(&arr,5,2,3,4,5,6);
    setSize(&arr,10);
    int result =binarySearch(&arr,5);
    printf("%d",result);

    
    return 0;
}
