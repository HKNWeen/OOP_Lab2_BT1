#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main() {
    NgayThangNam date;
    cout << "Nhap thoi gian:\n";
    date.Nhap();

    cout << "Thoi gian ban nhap:\n";
    date.Xuat();

    cout << "Ngay/Thang/Nam tiep theo:\n";
    // Goi phuong thuc tim ngay tiep theo va luu vao doi tuong moi
    NgayThangNam nextdate = date.TimNgayThangNamTiepTheo();
    nextdate.Xuat();

    return 0;
}
