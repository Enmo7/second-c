#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    char* p1 = &a;

    int x;
    int* p2 = &x;

    double y;
    double* p3 = &y;

// size of operator (byts).
    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(x));
    printf("%d\n", sizeof(y));
    return 0;
}
