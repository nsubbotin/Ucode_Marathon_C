int mx_atoi(const char*);
void mx_printint(int);
void mx_printchar(char);

int main(int argc, char *argv[]){
    if (argc != 3) return 0;
    int min = mx_atoi(argv[1]);
    int max = mx_atoi(argv[1]);
    if (mx_atoi(argv[2]) > max) max = mx_atoi(argv[2]);
    if (mx_atoi(argv[2]) < min) min = mx_atoi(argv[2]);

    for (int i = min; i < max; i++){
        for (int j = min; j < max; j++)
            mx_printint(i * j);
        mx_printchar('\n');
    }
}
