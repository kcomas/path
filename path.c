
#include <stdio.h>
#include <stdlib.h>

void print_row(int events, int tasks, int days) {
    printf("Events: %d, Tasks: %d, Days: %d\n", events, tasks, days);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s file.txt\n", argv[1]);
        exit(1);
    }

    printf("Opening %s\n", argv[1]);

    int events, tasks, days;

    FILE* fp = fopen(argv[1], "r");

    if (fp == NULL) {
        printf("No Such File %s\n", argv[1]);
        exit(1);
    }

    while (!feof(fp)) {
        fscanf(fp, "%d %d %d", &events, &tasks, &days);
        print_row(events, tasks, days);
    }

    return 0;
}
