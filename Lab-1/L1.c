#include <stdio.h>

int main() {
    int N, i;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    if (N <= 0) {
        printf("Error");
    } else {
        for (i = 0; i < N; i++) {
            printf("Hello Loop!");
            if (i < N - 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
