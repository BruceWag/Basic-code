#include <stdio.h>

int main() {
    int N, i;
    float unitPrice;
    float discount, totalDiscount = 0.0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%f", &unitPrice) != 1) {
            return 1;
        }

        discount = unitPrice * 0.04;
        totalDiscount += discount;
    }

    printf("%.2f\n", totalDiscount);

    return 0;
}
