/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 
#include <stdio.h>

// Bước 1: Xây dựng hàm hoán vị sử dụng con trỏ
// Dấu * trước tên biến (int *x) khai báo đây là một con trỏ
void hoanVi(int *x, int *y) {
    int temp; // Biến tạm để giữ giá trị trung gian
    
    temp = *x; // Lưu giá trị tại địa chỉ x vào temp
    *x = *y;   // Lấy giá trị tại địa chỉ y ghi đè vào địa chỉ x
    *y = temp; // Lấy giá trị trong temp ghi đè vào địa chỉ y
}

int main() {
    int a, b;

    // Bước 2: Nhập dữ liệu
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);

    printf("\nTruoc khi hoan vi: a = %d, b = %d\n", a, b);

    // Bước 3: Gọi hàm theo tham chiếu (truyền địa chỉ bằng dấu &)
    hoanVi(&a, &b);

    // Bước 4: Kiểm tra kết quả
    printf("Sau khi hoan vi:  a = %d, b = %d\n", a, b);

    return 0;
}