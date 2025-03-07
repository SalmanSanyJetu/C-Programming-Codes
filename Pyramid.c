#include <stdio.h>

int main() {
    int rows = 10;

    for (int n = 1; n <= rows; n++) {

        for (int o = n; o <= 19 ; o++)
        {
            printf(" ");
        }

        for (int i = n; i < n + n; i++)
        {
            printf("%d", i % 10);
        }

        for (int j = n + n - 2; j >= n; j--)
        {
           printf("%d", j % 10);
        }

        printf("\n");
    }


    return 0;
}
