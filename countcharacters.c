#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "abcabc124512";

    int length = strlen(str);
    int counter, i, j;

    counter = 0;
    i = 0;
    j = 0;

    while (i < length) {
        counter = 1;

        if (str[i] != '\0' && str[i] != ' ') {

            j = i + 1;
            while (j < length) {
                if (tolower(str[i]) == tolower(str[j])) {
                    counter++;
                    str[j] = '\0';
                }
                j++;
            }
            printf("\n '%c' = %d", str[i], counter);
        }
        i++;
    }
    return 0;
}