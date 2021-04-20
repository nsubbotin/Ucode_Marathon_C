#include "matrix.h"

int main(int argc, char *argv[]){
    WINDOW* mainwin = initscr();
    curs_set(false);
    mx_matrix_rain(mainwin, argc, argv);
    delwin(mainwin);
    endwin();
    return 0;
}
