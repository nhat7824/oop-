#include<bits/stdC++.h>
using namespace std;
class may
{
	private :
		char mamay[10];
		char kieumay[10];
		char tinhtrang[10];
	public :
		void nhap ()
		{
			cout<<"Nhap ma may: ";fflush(stdin);gets(mamay);
			cout<<"Nhap kieu may: ";fflush(stdin);gets(kieumay);
			cout<<"Nhap tinh trang cua may: ";fflush(stdin);gets(tinhtrang);
		}
		void xuat()
		{
			cout<<"Ma may da nhap la: "<<mamay<<endl;
			cout<<"Kieu may da nhap la: "<<kieumay<<endl;
			cout<<"Tinh trang may da nhap la: "<<tinhtrang<<endl;
		}
};
class quanly
{
	private :
		char maql[10];
		char hoten[10];
	public :
		void nhap ()
		{
			cout<<"Nhap ma quan ly: ";fflush(stdin);gets(maql);
			cout<<"Nhap ho ten quan ly: ";fflush(stdin);gets(hoten);	
		}
		void xuat()
		{
			cout<<"Ma quan ly da nhap la: "<<maql<<endl;
			cout<<"Ho ten quan ly da nhap la: "<<hoten<<endl;	
		}
}; 
class phongmay
{
	private :
		char maphong [10];
		char tenphong [10];
		float dientich ;
		quanly x;
		may *y;
		int n;
	public :
		void nhap ()
		{
			cout<<"Nhap ma phong: ";fflush(stdin);gets(maphong);
			cout<<"Nhap ten phong: ";fflush(stdin);gets(tenphong);
			cout<<"Nhap dien tich cua phong: ";cin>>dientich;
			x.nhap();
			cout<<"Nhap so luong may trong phong";
			cin>>n;
			y = new may[n];
			for(int i = 0 ; i < n;i++)
				y[i].nhap();		
		}
		void xuat()
		{
			cout<<"Ma phong da nhap la: "<<maphong<<endl;
			cout<<"Ten phong da nhap la: "<<tenphong<<endl;
			cout<<"Dien tich phong da nhap la: "<<dientich<<endl;	
			x.xuat();
			for(int i = 0 ; i < n;i++)
				y[i].xuat();						
		}
}; 
main()
{
	phongmay a;
	a.nhap();
	a.xuat();

}
