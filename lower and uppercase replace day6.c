#include <stdio.h>
#include <ctype.h>


int main() {
    char inputString[100];
    int i;

    printf("Enter a string: ");
    fgets(inputString, 100, stdin);

    for (i = 0; inputString[i] != '\0'; i++) {
        if (islower(inputString[i])) {
            inputString[i] = toupper(inputString[i]);
        } else if (isupper(inputString[i])) {
            inputString[i] = tolower(inputString[i]);
        }
    }

    printf("Converted string: %s", inputString);

    return 0;
}
