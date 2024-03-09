#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class sinhvien
{
	private :
		char masv[10];
		char hoten[10];
		int tuoi;
		float diem;
	public :
		void nhap()
		{
			cout<<"Nhap ma sinh vien ";fflush(stdin);gets(masv);
			cout<<"Nhap ho va ten: ";fflush(stdin);gets(hoten);
			cout<<"Nhap tuoi: ";cin>>tuoi;
			cout<<"Nhap diem: ";cin>>diem;	
		}
		void xuat()
		{
			cout<<setw(20)<<"Ma sinh vien la: "<<masv<<endl;
			cout<<setw(20)<<"Ho va ten sinh vien la: "<<hoten<<endl;
			cout<<setw(20)<<"Tuoi sinh vien la: "<<tuoi<<endl;
			cout<<setw(20)<<"Diem sinh vien la: "<<diem<<endl;
	}
};
main()
{
	sinhvien a;
	sinhvien b;
	cout<<"Nhap thong tin sinh vien a!"<<endl;
	a.nhap();
	cout<<"Nhap thong tin sinh vien b!"<<endl;
	b.nhap();
	cout<<"Thong tin sinh vien a da nhap la!"<<endl;
	a.xuat();
	cout<<"Thong tin sinh vien b da nhap la!"<<endl;
	 b.xuat();
}

