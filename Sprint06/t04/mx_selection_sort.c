#include <stdio.h>

int mx_strlen(const char*);
int mx_strcmp(const char*, const char*);

int mx_selection_sort(char **arr, int size){
    int min = 0;
    int c = 0;
    for (int i = 0; i < size - 1; i++){ 
        min = i; 
        for (int j = i + 1; j < size; j++) 
            if (mx_strlen(arr[j]) < mx_strlen(arr[min]) || (mx_strlen(arr[j]) == mx_strlen(arr[min]) && mx_strcmp(arr[j], arr[min]) < 0))
                min = j; 

        if (min != i){
            char *t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
            c++;
        }
    } 
    return c;
}

/*
int main(){
    char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
    printf("%d\n", mx_selection_sort(arr, 7));
    printf("\n");
    for (int i = 0; i < 7; i++)
        printf("%s\n", arr[i]);
}
*/
