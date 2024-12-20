#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d: ", n);
    for (int i = 1; i <= abs(n); i++) {
        if (n % i == 0) printf("%d ", i);
    }

    return 0;
}
