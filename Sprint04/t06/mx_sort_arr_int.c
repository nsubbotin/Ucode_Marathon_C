#include <stdio.h>

void mx_sort_arr_int(int *arr, int size){
    for (int i = 0; i < size; i++){
        int min = arr[i];
        int x = i;
        for (int j = i; j < size; j++){
            if (arr[j] < min){
                min = arr[j];
                x = j;
            }
        }
        int c = arr[i];
        arr[i] = arr[x];
        arr[x] = c;
    }
}

/*
int main()
{
    int arr[] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(arr, 7); 

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
}
*/
