#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Max int value = %d\n", INT_MAX);
    printf("Max float value = %e\n", FLT_MAX);
    printf("Min float value = %e\n", FLT_MIN);
    printf("Integer overflow: %d + 1 = %d\n", INT_MAX, INT_MAX + 1);
    printf("Floating-point overflow: %e * 10 = %e\n", FLT_MAX, FLT_MAX * 10);
    printf("Floating-point underflow: %e / 10 = %e\n", FLT_MIN, FLT_MIN / 10);
    return 0;
}