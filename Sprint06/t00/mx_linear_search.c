#include <stdio.h>

int mx_strcmp(const char*, const char*);
int mx_linear_search(char **arr, const char *s){
    int i = 0;
    while (arr[i] != NULL){
        if (mx_strcmp(arr[i], s) == 0) return i;
        i++;
    }
    
    return -1;
}


int main(){
    char *arr[] = { "222", "Abcd", "aBc", "ab", "az", "z", NULL };
    printf("%d\n", mx_linear_search(arr, "z"));
 //   printf("%d\n", mx_linear_search(arr, "aBc"));
}

