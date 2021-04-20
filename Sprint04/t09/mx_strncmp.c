#include <stdio.h>

int mx_abs(int value){
    return value > 0 ? value : -1 * value;
}

int mx_strcmp(const char *s1, const char *s2, int n){
    int max = 0;

    for (int i = 0; i < n; i++)
        if (mx_abs(s1[i] - s2[i]) > mx_abs(max)) max = s1[i] - s2[i];
    return max;
}

/*
int main()
{
    printf("%d\n", mx_strcmp("aloha!", "aloha!", 6));
    printf("%d\n", mx_strcmp("zfz", "gfg", 3));
    printf("%d\n", mx_strcmp("gfg", "zfz", 3));
}
/*
