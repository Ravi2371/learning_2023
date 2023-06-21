#include <stdio.h>
#include <stdlib.h>

int main() {
    char timeStr[9];
    int h, m, s, totalSeconds;

    printf("Enter time in the format hh:mm:ss: ");
    scanf("%8s", timeStr);
     h = atoi(timeStr);
    m = atoi(timeStr + 3);
    s = atoi(timeStr + 6);
    totalSeconds = h * 3600 + m * 60 + s;

    printf("Total s: %d\n", totalSeconds);

    return 0;
}
