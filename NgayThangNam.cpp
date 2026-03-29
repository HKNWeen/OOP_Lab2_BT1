
#include "NgayThangNam.h"
#include <iostream>
using namespace std;

//Nhap ngay, thang, nam;
void NgayThangNam::Nhap() {
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

//Xuat Ngay/Thang/Nam;
//Vi du: iNgay: 29, iThang: 11, iNam: 2007; Output: 29/11/2007;
void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam << '\n';
}

//Kiem tra xem co phai nam nhuan;
//Input: 2016 Output: true / 1;
//Nam nhuan chia het cho 400 hoac chia het cho 4 nhung ko chia het cho 100;
bool isLeap(int n) {
    return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}

//Ham tim ngay tiep theo
//Input: 29/11/2007 Output: 30/11/2007;
NgayThangNam NgayThangNam::TimNgayThangNamTiepTheo() {
    NgayThangNam kq;
    kq.iNgay = iNgay + 1;
    kq.iThang = iThang;
    kq.iNam = iNam;
    int NgayTrongThang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(kq.iNam)) NgayTrongThang[2] = 29;
    // Kiem tra neu so ngay vuot qua so ngay cua thang hien tai
    if (kq.iNgay > NgayTrongThang[kq.iThang]) {
        kq.iNgay = 1;
        kq.iThang++;
        //Kiem tra xem sau khi tang thi thang co qua 12
        if (kq.iThang > 12) {
            kq.iThang = 1;
            kq.iNam++;
        }
    }
    return kq;
}

