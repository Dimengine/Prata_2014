#include <stdio.h>

int main()
{
    float mbps, fileSize;

    printf("Input your internet speed in Mbps and file size in MB\n");
    scanf("%f%f", &mbps, &fileSize);
    printf("With internet speed %.2f Mbps and file size %.2f MB download finish in %.2f seconds\n", mbps, fileSize, fileSize * 8 / mbps);
    return 0;
}