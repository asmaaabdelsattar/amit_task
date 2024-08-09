#include <stdio.h>
#include <stdlib.h>

void getGrade(int x) {
    if (x >= 86 && x <= 100) {
        printf("Grade: Ex\n");
    } else if (x >= 76 && x <= 85) {
        printf("Grade: VG\n");
    } else if (x >= 66 && x <= 75) {
        printf("Grade: G\n");
    } else if (x >= 56 && x <= 65) {
        printf("Grade: passed\n");
    } else if (x >= 0 && x <= 55) {
        printf("Grade: failed\n");
    } else {
        printf("Invalid number\n");
    }
}
