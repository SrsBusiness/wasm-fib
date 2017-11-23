#include <stdio.h>

int fib(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return fib(x - 1) + fib(x - 2);
}

int main() {
    for (int i = 0; i < 20; i++) {
        printf("fib(%d) = %d\n", i, fib(i));
    }
}
