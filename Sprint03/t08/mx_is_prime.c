#include <stdbool.h>
#include <stdio.h>

bool mx_is_prime(int num){
    for (int i = 2; i < num / 2; i++){
        if (num % i == 0) return 0;
    }
    return 1;
}

/*int main(){
    printf("%d", mx_is_prime(19));
    printf("%d", mx_is_prime(323));
    printf("%d", mx_is_prime(89));
}*/