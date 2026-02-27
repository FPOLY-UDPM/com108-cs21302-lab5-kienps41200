// VÍ DỤ
// XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ

#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Nhập ba số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Giá trị lớn nhất là: %d\n", max);

    return 0;
};