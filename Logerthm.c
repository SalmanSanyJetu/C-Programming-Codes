`#include <stdio.h>
#include <math.h>
void main() {
    double n, base, r;
    int ch;

    printf("Enter a positive number: ");
    scanf("%lf", &n);

    printf("Choose an option:\n");
    printf("Press 1 for Natural logarithm (ln / base'e')\n");
    printf("Press 2 for Logarithm to a specified base\n");
    scanf("%d", &ch);

    if (ch == 1) {
        r = log(n);
        printf("Natural logarithm (base e) of %.2lf is %.2lf\n", n, r);
    } else if (ch == 2) {
        printf("Enter the base: ");
        scanf("%lf", &base);
        r = log(n) / log(base);
        printf("Logarithm base %.2lf of %.2lf is %.2lf\n", base, n, r);
    } else {
        printf("Invalid choice!\n");
    }
}
