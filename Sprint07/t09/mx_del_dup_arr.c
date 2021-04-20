#include <stdio.h>
#include <stdlib.h>
int *mx_del_dup_arr(int *src, int src_size, int *dst_size){
    int *t = malloc(src_size * sizeof(int));
    int c = 0;
    for (int i = 0; i < src_size; i++){
        int f = 0;
        for (int j = 0; j < c; j++){
            if (t[j] == src[i]){
                f = 1;
                break;
            }
        }
        if (!f){
            t[c] = src[i];
            c++;
        }
    }
    *dst_size = c;
    return t;
}

/*
int main(){
    int arr[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
    int dst_size = 0;
    int *arr1 = mx_del_dup_arr(arr, 11, &dst_size);
    printf("%d\n", dst_size);
    for (int i = 0; i < dst_size; i++)
        printf("%d, ", arr1[i]);
}
*/
