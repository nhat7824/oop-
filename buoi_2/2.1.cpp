#include<bits/stdC++.h>
using namespace std;
class date
{
	private :
		char d[3];
		char m[3];
		char y[5];
	public :
		void nhap ()
		{
			cout<<"Nhap ngay: ";fflush(stdin);gets(d);
			cout<<"Nhap thang: ";fflush(stdin);gets(m);
			cout<<"Nhap nam: ";fflush(stdin);gets(y);
		}
		void xuat()
		{
			cout << "Ngay thang nam da nhap la: ";
			cout << d <<"-";
			cout << m <<"-";
			cout << y;
		}
};
class nhansu
{
	private :
		char manhansu[10];
		char hoten[20];
		date ns;
	public :
		void nhap ()
		{
			cout<<"Nhap ma nhan su: ";fflush(stdin);gets(manhansu);
			cout<<"Nhap ho ten: ";fflush(stdin);gets(hoten);
			ns.nhap();
		}
		void xuat()
		{
			cout<<"Ma nhan su da nhap la: "<<manhansu<<endl;
			cout<<"Ho ten nhan su da nhap la: "<<hoten<<endl;
			ns.xuat();
		}
}; 
main()
{
	nhansu x;
	x.nhap();
	x.xuat();
}
