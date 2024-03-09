#include<bits/stdc++.h>
using namespace std;
class phieu
{
	private :
		char maphieu[30];
		char mancc[30];
		char tenncc[30];
		char ngaylap[30];
		char diachi[40];
	friend class phieunhaphang;		
};
class hang
{
	private :
		char tenhang[30];
		float dongia;
		int soluong;
		float thanhtien ;
	friend class phieunhaphang;				
};
class phieunhaphang
{
	private:
		phieu p;
		hang *h;
		int n;
		float congthanhtien;
	public :
		void nhap()
		{
			h = new hang[n];
			cout<<"Nhap ma phieu:";fflush(stdin);gets(p.maphieu);
			cout<<"Nhap ma ncc:";fflush(stdin);gets(p.mancc);
			cout<<"Nhap ma ncc:";fflush(stdin);gets(p.tenncc);
			cout<<"Nhap ngay lap:";fflush(stdin);gets(p.ngaylap);
			cout<<"Nhap dia chi:";fflush(stdin);gets(p.diachi);
			cout<<"Nhap so luong hang: ";cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin cho hang thu "<<i+1<<" !\n";
				cout<<"Nhap ten hang: ";fflush(stdin);gets(h[i].tenhang);
				cout<<"Nhap don gia: ";cin>>h[i].dongia;
				cout<<"Nhap so luong: ";cin>>h[i].soluong;	
			}
		}
		void xuat()
		{
			cout<<setw(40)<<"PHIEU NHAP HANG !\n";
			cout<<"Ma phieu: "<<p.maphieu<<setw(30)<<"Ngay lap: "<<p.ngaylap<<endl;
			cout<<"Ma ncc: "<<p.mancc<<setw(30)<<"Ten ncc: "<<p.tenncc<<endl;
			cout<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"so luong"<<setw(10)<<"Thanh tien";
			for(int i=0;i<n;i++)
			{	
				cout<<h[i].tenhang<<setw(15)<<h[i].dongia<<setw(15)<<h[i].soluong
				<<setw(15)<<h[i].soluong*h[i].dongia<<endl;	
				congthanhtien += h[i].soluong*h[i].dongia;
			}
			cout<<setw(50)<<"Cong thanh tien:  "<<congthanhtien;
		}			
};
int main()
{
	phieunhaphang a;
	a.nhap();
	a.xuat();
	return 0;
}
//#include <iostream>
//#include <iomanip>
//#include <cstring>

//using namespace std;
//
//class phieu
//{
//private:
//    char maphieu[30];
//    char mancc[30];
//    char tenncc[30];
//    char ngaylap[30];
//    char diachi[40];
//
//    friend class phieunhaphang;
//};
//
//class hang
//{
//private:
//    char tenhang[30];
//    float dongia;
//    int soluong;
//    float thanhtien;
//
//    friend class phieunhaphang;
//};
//
//class phieunhaphang
//{
//private:
//    phieu p;
//    hang *h; 
//    int n;
//    float congthanhtien;
//
//public:
//    phieunhaphang()
//    {
//        h = NULL; 
//    }
//
//    void nhap()
//    {
//        cout << "Nh?p mã phi?u: ";
//        cin.getline(p.maphieu, sizeof(p.maphieu));
//        cout << "Nh?p mã NCC: ";
//        cin.getline(p.mancc, sizeof(p.mancc));
//        cout << "Nh?p tên NCC: ";
//        cin.getline(p.tenncc, sizeof(p.tenncc));
//        cout << "Nh?p ngày l?p: ";
//        cin.getline(p.ngaylap, sizeof(p.ngaylap));
//        cout << "Nh?p d?a ch?: ";
//        cin.getline(p.diachi, sizeof(p.diachi));
//        cout << "Nh?p s? lu?ng hàng: ";
//        cin >> n;
//
//        h = new hang[n];
//
//        for (int i = 0; i < n; i++)
//        {
//            cout << "Nh?p thông tin cho hàng th? " << i + 1 << " !\n";
//            cout << "Nh?p tên hàng: ";
//            cin.ignore(); // Xóa b? d?m d?u vào
//            cin.getline(h[i].tenhang, sizeof(h[i].tenhang));
//            cout << "Nh?p don giá: ";
//            cin >> h[i].dongia;
//            cout << "Nh?p s? lu?ng: ";
//            cin >> h[i].soluong;
//            h[i].thanhtien = h[i].soluong * h[i].dongia; // Tính thành ti?n
//        }
//    }
//
//    void xuat()
//    {
//        cout << setw(40) << "PHI?U NH?P HÀNG !\n";
//        cout << "Mã phi?u: " << p.maphieu << setw(30) << "Ngày l?p: " << p.ngaylap << endl;
//        cout << "Mã NCC: " << p.mancc << setw(30) << "Tên NCC: " << p.tenncc << endl;
//        cout << setw(10) << "Tên hàng" << setw(15) << "Ðon giá" << setw(15) << "S? lu?ng" << setw(15) << "Thành ti?n" << endl;
//
//        for (int i = 0; i < n; i++)
//        {
//            congthanhtien += h[i].thanhtien;
//            cout << setw(10) << h[i].tenhang << setw(15) << h[i].dongia << setw(15) << h[i].soluong
//                 << setw(15) << h[i].thanhtien << endl;
//        }
//
//        cout << setw(50) << "T?ng thành ti?n:  " << congthanhtien << endl;
//    }
//    ~phieunhaphang()
//    {
//        delete[] h;
//    }
//};
//
//int main()
//{
//    phieunhaphang a;
//    a.nhap();
//    a.xuat();
//
//    return 0;
//}

