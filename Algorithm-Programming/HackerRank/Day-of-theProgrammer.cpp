#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dayOfProgrammer(int year, char *date) {
    if (year == 1918) {
        // Transition year: 14 days lost in February
        strcpy(date, "26.09.1918");
    } else if (year < 1918) {
        // Julian calendar
        if (year % 4 == 0) {
            sprintf(date, "12.09.%d", year);
        } else {
            sprintf(date, "13.09.%d", year);
        }
    } else {
        // Gregorian calendar
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            sprintf(date, "12.09.%d", year);
        } else {
            sprintf(date, "13.09.%d", year);
        }
    }
}

int main() {
    char date[20];
    int year;

    scanf("%d", &year); getchar();

    dayOfProgrammer(year, date);

    printf("%s\n", date);

    return 0;
}
