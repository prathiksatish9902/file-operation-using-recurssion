#include <stdio.h>
#include <string.h>

void reversePrint(FILE *file) {
    char s[1000];
    if (fgets(s, sizeof(s), file) != NULL) {
        reversePrint(file);
        printf("%s", s);
    }
}

int main() {
    FILE *file;
    char s[1000];

    file = fopen("MYSELF1.txt", "a");
    if (file == NULL) {
        puts("Cannot open file");
        return 1;
    }


    printf("Enter lines (enter an empty line to stop):\n");
    while (strlen(gets(s)) > 0) {
        fputs(s, file);
        fputs("\n", file);
    }
    fclose(file);


    file = fopen("MYSELF1.txt", "r");
    printf("\nReversed content of the file:\n");
    if (file != NULL) {
        reversePrint(file);
        fclose(file);
    } else {
        puts("Cannot open file");
    }

    return 0;
}
