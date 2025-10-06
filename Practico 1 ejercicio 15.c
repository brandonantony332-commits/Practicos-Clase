#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    t = time(NULL);
    tm_info = localtime(&t);

    printf("Hora actual: %02d:%02d:%02d\n",
           tm_info->tm_hour,
           tm_info->tm_min,
           tm_info->tm_sec);

    return 0;
}
