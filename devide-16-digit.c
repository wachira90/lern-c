#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("devide-16-digit\n");

    double A, B, result;
    A = 22.0000000000000001;
    B = 7.0000000000000001;
    result = A / B;

    printf("%0.16f / %0.16f = %0.16f\n", A, B, result );

    return 0;
}
