#include <stdio.h>
#include <stdbool.h>
bool mx_isdigit(int c);
bool mx_isalpha(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

unsigned long mx_hex_to_nbr(const char *hex){
    unsigned long result = 0;
    for (int i = 0; hex[i] != '\0'; i++){
        result *= 16;
        if (mx_isdigit(hex[i]))
            result += hex[i] - '0';
        else if (mx_isalpha(hex[i])){
            int add = 0;
            if (mx_isupper(hex[i]))
                add = hex[i] - 'A' + 10;
            else 
                add = hex[i] - 'a' + 10;
            if (add > 15) return 0;
            result += add;
        }
        else
            return 0;
    }
    return result;
}

/*
int main(){
    printf("%lu\n", mx_hex_to_nbr("FADE"));
}
*/
