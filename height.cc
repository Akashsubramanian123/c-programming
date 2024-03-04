#include <stdio.h>

int main() {
    float height = 1.75;
    if (height > 1.8) {
        printf("Taller\n");
    } else if (height < 1.5) {
        printf("Dwarf\n");
    } else {
        printf("Average\n");
    }

    return 0;
}

