/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Bước 1: Xây dựng hàm kiểm tra năm nhuận
// Hàm trả về 1 nếu là năm nhuận, trả về 0 nếu không phải
int kiemTraNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; // Đúng là năm nhuận
    } else {
        return 0; // Không phải năm nhuận
    }
}

int main() {
    int n;

    // Bước 2: Nhập năm từ bàn phím
    printf("Nhap vao mot nam bat ky: ");
    scanf("%d", &n);

    // Bước 3: Gọi hàm và kiểm tra kết quả trả về
    if (kiemTraNamNhuan(n) == 1) {
        printf("Nam %d LA nam nhuan.\n", n);
    } else {
        printf("Nam %d KHONG PHAI la nam nhuan.\n", n);
    }

    return 0;
}
