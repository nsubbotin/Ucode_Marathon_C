#include <stdio.h>
#include "mx_printchar.c"
//void mx_printchar(char c);

void mx_pyramid(int n){
	if (n == 0 || n % 2 > 0){}
	int rows = n;
	int columns = 2 * n;
	int side = n / 2;
	char str[rows][columns];
	for (int sortr = 0; sortr < rows; sortr ++){
		for (int sortc = 0; sortc < columns; sortc ++){
			str[sortr][sortc] = ' ';
		// top line	
			if (sortr == 0){
				str[sortr][n - 1] = '/';
				str[sortr][n] = '\\';
				if (sortc > n) str[sortr][sortc] = 's';
			}
		// top sides
			if (sortr > 0 && sortr <= rows - 1 - side){
				str[sortr][n - 1 - sortr] = '/';
				str[sortr][n - 1 + sortr] = '\\';
				str[sortr][n + sortr + sortr] = '\\';
				if (sortc > n + sortr + sortr) str[sortr][sortc] = 's';
			}
		// bot sides
			if (sortr < rows - 1 && sortr > rows - 1 - side){
				str[sortr][columns - 1] = '|';
				if (sortc == 0 + rows - 1 - sortr) str[sortr][sortc] = '/';
				if (sortc == columns - 1 - rows + sortr) str[sortr][sortc] = '\\';
			}
		// bottom line	
			if (sortr == rows - 1){
				str[sortr][0] = '/';
				if (sortc > 0 && sortc <= columns - 3) str[sortr][sortc] = '_';
				str[sortr][columns - 2] = '\\';
				str[sortr][columns - 1] = '|';
				}
			}
		}		 
		for (int sortrp = 0; sortrp < rows; sortrp ++){
			for (int sortcp = 0; sortcp < columns; sortcp ++){
				if (str[sortrp][sortcp] != 's') {
					mx_printchar(str[sortrp][sortcp]);
				}
			}
		mx_printchar('\n');
		}	
	}
int main(){
 	mx_pyramid(42);
}
