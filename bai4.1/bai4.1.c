#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); //nhập số thập phân
    int check;
    scanf("%d", &check); //nhập bits cần kiểm tra
    int bit_value = (n >> check) & 1;
    printf("Bit thu %d cua %d la %d\n", check + 1, n, bit_value);

    return 0;
}
