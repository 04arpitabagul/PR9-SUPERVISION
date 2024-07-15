//Q.1 File Handling
//Develop a program that writes even & odd numbers from 50 to 70 into two separate files.
//
//Example:
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69
//
//Marking Criteria: (Total 4 Marks)
//Logic: 2 Marks
//Output: 2 Marks

#include <stdio.h>
#include <conio.h>

int main() {
	int i;
    FILE *even_file, *odd_file;
    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    for ( i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d ", i);
        } else {
            fprintf(odd_file, "%d ", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers from even_file.txt: ");
    for ( i = 50; i <= 70; i += 2) {
        printf("%d ", i);
    }

    printf("\nOdd numbers from odd_file.txt: ");
    for ( i = 51; i <= 70; i += 2) {
        printf("%d ", i);
    }

    getch();
}


