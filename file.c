#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r+"); // Open the file in read/write mode

    char text[1024] = {0};
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text); // Print the content of the file
    }

    fclose(file);
    return 0;
}