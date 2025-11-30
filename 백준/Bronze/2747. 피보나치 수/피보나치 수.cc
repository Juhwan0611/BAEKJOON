#include <stdio.h>

int main()
{
    int fibonacci[46] = {0, 1};
    int n = 0;

    for(int i = 2; i < sizeof(fibonacci) / sizeof(int); i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    scanf("%d", &n);

    printf("%d\n", fibonacci[n]);

    return 0;
}