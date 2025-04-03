#include <stdio.h>

extern int add(int a, int b);  // Declaration of the external function

int main() {
    int result = add(2, 3);
    printf("2 + 3 = %d\n", result);
    return 0;
}
