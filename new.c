#include<stdio.h>

int main(void) {
	int space, tab, new_line;
	/* initialize counters */
	space = tab = new_line = 0;
	/* use int for getchar() to allow EOF detection */
	int ch;
printf("Write down your text \n");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			space++;
		else if (ch == '\t')
			tab++;
		else if (ch == '\n')
			new_line++;
	}

printf("Total blank space(s) is/are %d \n", space);
printf("Total tab(s) is/are %d \n", tab);
printf("Total new line(s) is/are %d \n", new_line);
return 0;
}