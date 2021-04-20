#include <stdio.h>
#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (f(arr[j], arr[j + 1])){
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
}


bool compare(int a, int b){
    return a > b;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    mx_sort(arr, 5, compare);
    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
}

