#include <iostream>
#include <string.h>
using namespace std;
class Nguoi
{
	protected:
	    int MaTheCanCuoc;
	    char Ho[30];
	    char Ten[30];
	    char NgaySinh[11];
	public:
	    Nguoi(int maTheCanCuoc, const char* ho, const char* ten, const char* ngaySinh)
	        : MaTheCanCuoc(maTheCanCuoc)
		{
	        strcpy(Ho, ho);
	        strcpy(Ten, ten);
	        strcpy(NgaySinh, ngaySinh);
	    }
	    virtual void XuatThongTin() 
		{ 		    	
	        cout << "Thong tin nguoi:" << endl;
	        cout << "Ma the can cuoc: " << MaTheCanCuoc << endl;
	        cout << "Ho va ten: " << Ho << " " << Ten << endl;
	        cout << "Ngay sinh: " << NgaySinh << endl;
	    }
	   // virtual double TinhLuong() = 0; // Phuong thuc thuan ao
};
class GiangVien : public Nguoi 
{
	protected:
	    double LuongCoBan;
	    double TienCongMotTiet;
	    int SoTietDay;
	public:
	    GiangVien(int maTheCanCuoc, const char* ho, const char* ten, const char* ngaySinh,
	              double luongCoBan, double tienCongMotTiet, int soTietDay)
	        : Nguoi(maTheCanCuoc, ho, ten, ngaySinh), LuongCoBan(luongCoBan),
	          TienCongMotTiet(tienCongMotTiet), SoTietDay(soTietDay) {}
	    void XuatThongTin() 
		{
	        Nguoi::XuatThongTin();
	        cout << "Thong tin giang vien:" << endl;
	        cout << "Luong co ban: " << LuongCoBan << endl;
	        cout << "Tien cong mot tiet: " << TienCongMotTiet << endl;
	        cout << "So tiet day: " << SoTietDay << endl;
	    }
	    double TinhLuong()
		{
	        return LuongCoBan + TienCongMotTiet * SoTietDay;
	    }
};

class ChuyenVien : public Nguoi 
{
	protected:
	    double LuongCoBan;
	    double PhuCap;
	public:
	    ChuyenVien(int maTheCanCuoc, const char* ho, const char* ten, const char* ngaySinh,
	               double luongCoBan, double phuCap)
	        : Nguoi(maTheCanCuoc, ho, ten, ngaySinh), LuongCoBan(luongCoBan), PhuCap(phuCap) {}
	    void XuatThongTin() 
		{
	        Nguoi::XuatThongTin();
	        cout << "Thong tin chuyen vien:" << endl;
	        cout << "Luong co ban: " << LuongCoBan << endl;
	        cout << "Phu cap: " << PhuCap << endl;
	    }
	    double TinhLuong() 
		{
	        return LuongCoBan + PhuCap;
	    }
};
int main()
{
    Nguoi* danhSach[3];
    danhSach[0] = new GiangVien(123, "Nguyen", "Van A", "01/01/1998", 5000, 2000, 20);
    danhSach[1] = new ChuyenVien(456, "Tran", "Thi B", "15/05/1999", 7000, 1000);
    danhSach[2] = new GiangVien(789, "Le", "Van C", "10/10/2000", 6000, 2500, 15);
    for (int i = 0; i < 3; i++) 
	{
        danhSach[i]->XuatThongTin();
        cout << "Luong: " << danhSach[i]->TinhLuong() << endl;
        cout << "------------------------" << endl;
    }
    for (int i = 0; i < 3; i++) 
	{
        delete danhSach[i];
    }
    return 0;
}

