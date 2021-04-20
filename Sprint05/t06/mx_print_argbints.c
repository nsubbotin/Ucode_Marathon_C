int mx_atoi(const char*);
void mx_printint(int);
void mx_printchar(char);
int main(int argc, char *argv[]){
    for (int i = 1; i < argc; i++){
        int v = mx_atoi(argv[i]);
        char b[] = "00000000000000000000000000000000";
        b[0] = v < 0 ? '1' : '0';
        v *= (v > 0) * 2 - 1;
        for (int i = 31; i > 0; i--){
            b[i] = v % 2 + '0';
            v /= 2;
        }
        for (int i = 0; i < 32; i++)
            mx_printchar(b[i]);
        mx_printchar('\n');
    }
}
