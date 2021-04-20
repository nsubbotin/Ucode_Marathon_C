#include <stdio.h>

int mx_popular_int(const int *arr, int size){
    int uuu = arr[0];
    int count = 1;

    for (int i = 0; i < size; i++){
        int currentInt = arr[i];
        int currentCount = 0;
        for (int j = 0; j < size; j++){
            if (arr[j] == currentInt)
                currentCount++;
            if (currentCount > count){
                count = currentCount;
                uuu = arr[j];
            }
        }
    }
    return uuu;
}

/*
int main()
{
    int arr[] = {2, 2, 4, 4, 5, 5, 5};
    printf("%d\n", mx_popular_int(arr, 7)); 
}
*/
