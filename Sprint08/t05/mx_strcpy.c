char *mx_strcpy(char *dst, const char *src){
    char *s = dst;
    while (*src){
        *dst++ = *src++;
    }
    *dst = 0;
    return s;
}
