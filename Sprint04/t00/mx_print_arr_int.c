#include <stdio.h>

void mx_printchar(int n);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size){
    for (int i = 0; i < size; i++){
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}

/*
int main()
{
    int arr[] = {2, 4, 16, 2312, -132, -67, 24};
    mx_print_arr_int(arr, 7);
}
*/
