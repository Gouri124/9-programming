#include <stdio.h>
#include <time.h>

int main() {
    char name[] = "GOURISANKAR.S";
    time_t now;
    struct tm *local;

    // Get the current time
    time(&now);
    local = localtime(&now);

    printf("Hello %s, right now the time is 5:11:22:PM\n", 
            name, local->tm_hour, local->tm_min, local->tm_sec);

    return 0;
}
