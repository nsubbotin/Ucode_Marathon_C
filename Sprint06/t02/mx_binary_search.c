#include <stdio.h>

int mx_strcmp(const char*, const char*);
int mx_binary_search(char **array, int size, const char *s, int *count){
    int f = 0;
    int l = size - 1;
    int m = (f + l) / 2;

    while (f <= l) {
        *count = *count + 1;
        if (mx_strcmp(array[m], s) < 0)
            f = m + 1;
        else if (mx_strcmp(array[m], s) == 0)
            return m;
        else
            l = m - 1;
        m = (f + l)/2;
    }
    *count = 0;
    return -1;
}

/*
int main(){
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count= 0;
    printf("%d\n", mx_binary_search(arr, 6, "ab", &count));
    printf("%d\n", count);
    count= 0;
    printf("%d\n", mx_binary_search(arr, 6, "aBc", &count));
    printf("%d\n", count);
    count= 0;
    printf("%d\n", mx_binary_search(arr, 6, "aBz", &count));
    printf("%d\n", count);
}
*/
