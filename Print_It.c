#include <stdio.h>

void print_love_assignment(int n) {
    for (int i = 0; i < n; i++) {
        printf("I Love Assignment\n");
    }
}

int main() {
    int n;
  
    scanf("%d", &n);
    print_love_assignment(n);
    return 0;
}
