/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Bước 1: Xây dựng hàm tìm giá trị lớn nhất
float timMax(float a, float b, float c) {
    float max = a; // Giả sử a là số lớn nhất

    if (b > max) {
        max = b; // Nếu b lớn hơn max, cập nhật max
    }
    
    if (c > max) {
        max = c; // Nếu c lớn hơn max, cập nhật max
    }

    return max; // Trả về giá trị lớn nhất tìm được
}

int main() {
    float n1, n2, n3;

    // Bước 2: Nhập dữ liệu từ bàn phím
    printf("Nhap vao 3 so bat ky:\n");
    printf("So thu nhat: "); scanf("%f", &n1);
    printf("So thu hai: ");  scanf("%f", &n2);
    printf("So thu ba: ");   scanf("%f", &n3);

    // Bước 3: Gọi hàm và lưu kết quả vào biến 'ketQua'
    float ketQua = timMax(n1, n2, n3);

    // Bước 4: Xuất kết quả
    printf("\n---------------------------\n");
    printf("So lon nhat trong 3 so la: %.2f\n", ketQua);

    return 0;
}