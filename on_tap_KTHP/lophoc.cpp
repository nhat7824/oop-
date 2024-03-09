#include<bits/stdc++.h>
using namespace std;
class nguoi
{
	protected :
		char hoten[30];
		char ngaysinh[30];
		char quequan[30];
	public :
		void nhap()
		{
			cout<<"Nhap ten: ";fflush(stdin);gets(hoten);
			cout<<"Nhap que quan: ";fflush(stdin);gets(quequan);	
			cout<<"Nhap ngay sinh: ";fflush(stdin);gets(ngaysinh);	
		}
		void xuat()
		{
			cout<<"Ten: "<<hoten<<endl;
			cout<<"Que quan: "<<quequan<<endl;
			cout<<"Ngay sin: "<<ngaysinh<<endl;		
		}	
};
class sinhvien : public nguoi
{
	private:
		char masv[30];
		char nganh[30];
		int khoahoc;
	public :
		void nhap()
		{
			nguoi::nhap();
			cout<<"Nhap ma sinh vien: ";fflush(stdin);gets(masv);
			cout<<"Nhap nganh: ";fflush(stdin);gets(nganh);
			cout<<"Nhap khoa hoc: ";cin>>khoahoc;
		}
		void xuat()
		{
			nguoi::xuat();
			cout<<"Ma sinh vien: "<<masv<<endl;
			cout<<"Nganh: "<<nganh<<endl;
			cout<<"Khoa hoc: "<<khoahoc<<endl;	
		}	
};
class lophoc
{
	private :
		char malh[30];
		char tenlh[30];
		char ngaymo[30];
		char giaovien[30];
		sinhvien *x;
		int n;
	public :
		void nhap()
		{
			cout<<"Nhap ma lop hoc: ";fflush(stdin);gets(malh);
			cout<<"Nhap ten lop hoc: ";fflush(stdin);gets(tenlh);
			cout<<"Nhap ngay mo: ";fflush(stdin);gets(ngaymo);
			cout<<"Nhap ten giao vien: ";fflush(stdin);gets(giaovien);
			cout<<"Nhap so luong sinh vien trong lop: ";cin>>n;
			x = new sinhvien[n];
			for(int i=1;i<=n;i++)
			{
				cout<<"Nhap thong tin cho sinh vien thu "<<i<<": ";
				x[i].nhap();
			}
		}
		void xuat()
		{
			cout<<"Ma lop hoc: "<<malh<<endl;
			cout<<"Ten lop hoc: "<<tenlh<<endl;
			cout<<"Ngay mo: "<<ngaymo<<endl;
			cout<<"Ten giao vien: "<<giaovien<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<"Thong tin cho sinh vien thu "<<i<<": ";
				x[i].xuat();
			}			
		}
};
int main()
{
	lophoc a;
	a.nhap();
	a.xuat();
	return 0;
}

















