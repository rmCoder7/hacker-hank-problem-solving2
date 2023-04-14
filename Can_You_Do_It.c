#include <stdio.h>

void print_numbers(int n) {
    if (n <= 0) {
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
   
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}
