#include <stdbool.h> 
#include "minilibmx.h"
bool mx_isdigit(int);
int mx_atoi(const char *str){
    int fine = 0;
    int revo = 0;
    for (int i = 0; str[i] != '\0'; ++i){
        int symba = str[i] - '0';
        if (!mx_isdigit(symba)){
            if (i > 0 || str[i] != '-')
                return 0;
            else if (i == 0 && str[i] == '-')
                revo = 1;
        }
        else{
            fine *= 10;
            fine += symba;
        }
    }
    return revo == 0 ? fine : revo * -1;
}
