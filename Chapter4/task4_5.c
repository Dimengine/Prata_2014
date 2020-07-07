#include <stdio.h>

int main(void)
{
    float Mbs, fileSize;

    printf("Input the download speed in megabits per second (Mbs) and the size of a file in megabytes (MB): ");
    scanf("%f%f", &Mbs, &fileSize);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", Mbs, fileSize, fileSize * 8 / Mbs);
    return 0;
}