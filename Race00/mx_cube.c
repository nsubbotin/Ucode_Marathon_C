#include <stdio.h>
#include "mx_printchar.c"
//void mx_printchar(char c);

void mx_cube(int n){
	int rows = n + n/2 + 3;
	int columns = 2 * n + n / 2 + 3;
	char str[rows][columns];
	for (int sortr = 0; sortr < rows; sortr ++){
		for (int sortc = 0; sortc < columns; sortc ++){
			str[sortr][sortc] = ' ';
		// top line	
			if (sortr == 0){
				if (sortc == columns - 2 - 2 * n || sortc == columns - 1) str[sortr][sortc] = '+';
				if (sortc < columns - 1 && sortc > columns - 2 - 2 * n) str[sortr][sortc] = '-';
			}
		// top sides
			if (sortr > 0 && sortr <= n / 2){
				if (sortc == columns - 1) str[sortr][columns - 1] = '|';
				if (sortc == columns - 2 - (sortr - 1) || sortc == columns - 2 - sortr - 2 * n) str[sortr][sortc] = '/';
			}
		// mid line
			if (sortr == n / 2 + 1){
				str[sortr][0] = '+';
				if (sortc > 0 && sortc <= 2 * n) str[sortr][sortc] = '-';
				if (sortc == 2 * n + 1)	str[sortr][sortc] = '+';
				if (sortc == columns - 1) str[sortr][columns - 1] = '|';
			}
		// betwin line
			if (sortr > n / 2 + 1){
				str[sortr][0] = '|';
				str[sortr][n * 2 + 1] = '|';
				str[sortr][columns - 1] = '|';
			}
		// bot back line
			if (sortr == n + 1){
				str[sortr][columns - 1] = '+';
			}
		// bot sides
			if (sortr > n + 1){
				if (sortc == columns - 1 - (sortr - n - 1)) str[sortr][sortc] = '/';
				if (sortc > columns - 1 - (sortr - n - 1)) str[sortr][sortc] = 's';
			}
		// bottom line	
			if (sortr == rows - 1){
				str[sortr][0] = '+';
				if (sortc > 0 && sortc <= 2 * n) str[sortr][sortc] = '-';
				str[sortr][2 * n + 1] = '+';
				if (sortc > 2 * n + 1) str[sortr][sortc] = 's';
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
	mx_cube(2);
	mx_cube(15);
}

