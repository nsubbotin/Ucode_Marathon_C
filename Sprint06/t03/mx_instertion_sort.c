#include <stdio.h>

int mx_strlen(const char*);
int mx_insertion_sort(char **array, int size) {
    int c = 0;
    for (int s = 1; s < size; s++) {
        char *k = array[s];
        int j = s - 1;
        for (; j >= 0 && mx_strlen(k) < mx_strlen(array[j]); j--){
            array[j + 1] = array[j];
            c++;
        }
        array[j + 1] = k;
    }
    return c;
}

/*
int main(){
    char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
    printf("%d\n", mx_insertion_sort(arr, 5));
}
*/
