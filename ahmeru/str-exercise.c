#include <stdio.h>
#include <string.h>

int contains_char(const char *str, char c) {

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count = 1;
            break;
        }
    }

    return count;
    
}


int main() {

    printf("'Apple' contains 'A'? %d\n", contains_char("Apple", 'A'));

    return 0;
}

