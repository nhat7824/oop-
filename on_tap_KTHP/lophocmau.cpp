#include<iostream>
using namespace std;
#include<string.h>
#include<iomanip>
#include<math.h>

class nguoi
{
	protected:
		char hoten[20];
		char ns[15];
		char que[15];
	public:
		void nhap();
		void xuat();
};
//class lophoc;
class sv:private nguoi
{
	private:
		char msv[10];
		char nganh[15];
		int khoahoc;
	public:
		void nhap();
		void xuat();
	friend void k11(lophoc l);
	friend void sapxep(lophoc l2);
};
class lophoc
{
	private:
		int malh;
		char tenlop[10];
		char ngaymo[15];
		sv *x;
		int n;
		char gv[20];
	public:
		void nhap();
		void xuat();
	friend void k11(lophoc l);
	friend void sapxep(lophoc l2);
};
void nguoi::nhap()
{
	cout<<"\n Nhap ho ten: ";			fflush(stdin);		gets(hoten);
	cout<<"\n Nhap ngay sinh: ";		fflush(stdin);		gets(ns);
	cout<<"\n Nhap que quan: ";			fflush(stdin);		gets(que);
}
void nguoi::xuat()
{
	cout<<setw(10)<<hoten<<setw(10)<<ns<<setw(10)<<que;
}
void sv::nhap()
{
	nguoi::nhap();
	cout<<"\n Nhap MSV: ";				fflush(stdin);		gets(msv);
	cout<<"\n Nhap nganh: ";			fflush(stdin);		gets(nganh);
	cout<<"\n Nhap khoa hoc: ";								cin>>khoahoc;
}
void sv::xuat()
{
	nguoi::xuat();
	cout<<setw(7)<<msv<<setw(7)<<nganh<<setw(7)<<khoahoc<<endl;
}
void lophoc::nhap()
{
	cout<<"\n Nhap ma lop hoc: ";							cin>>malh;
	cout<<"\n Nhap ten lop hoc: ";		fflush(stdin);		gets(tenlop);
	cout<<"\n Nhap ngay mo: ";			fflush(stdin);		gets(ngaymo);
	cout<<"\n Nhap so luong sinh vien trong lop: ";			cin>>n;
	x=new sv[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\n Sinh vien "<<i+1;
		x[i].nhap();
	}
	cout<<"\n Nhap GVCN: ";				fflush(stdin);		gets(gv);
}
void lophoc::xuat()
{
	cout<<"\n Ma lop hoc: "<<malh;
	cout<<"\n Ten lop hoc: "<<tenlop;
	cout<<"\n Ngay mo: "<<ngaymo;
	cout<<"\n SINH VIEN TRONG LOP"<<endl;
	cout<<setw(10)<<"Ho ten"<<setw(10)<<"Ngay sinh"<<setw(10)<<"Que quan"<<setw(7)<<"MSV"<<setw(7)<<"Nganh"<<setw(7)<<"Khoa"<<endl;
	for(int i=0;i<n;i++)
	{
		x[i].xuat();
	}
	cout<<"\n GVCN: "<<gv;
}
void k11(lophoc l)
{
	int dem=0;
	for(int i=0;i<l.n;i++)
		if(l.x[i].khoahoc == 11)
			dem++;
	cout<<"\n SO LUONG SINH VIEN KHOA 11: "<<dem;
}
void sapxep(lophoc l2)
{
	for(int i=0;i<l2.n-1;i++)
		for(int j=i+1;j<l2.n;j++)
			if(l2.x[j].khoahoc < l2.x[i].khoahoc)
			{
				sv tg=l2.x[j];
				l2.x[j]=l2.x[i];
				l2.x[i]=tg;
			}
}
main()
{
	lophoc l1;
	cout<<"\n ========== NHAP THONG TIN LOP HOC ==========";
	l1.nhap();
	cout<<"\n ========== HIEN THI THONG TIN LOP HOC ==========";
	l1.xuat();
	k11(l1);
	cout<<"\n ========== SAP XEP DANH SACH SV THEO CHIEU TANG DAN CUA KHOA HOC ==========";
	sapxep(l1);
	l1.xuat();
}
