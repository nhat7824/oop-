#include<bits/stdc++.h>
using namespace std;
class tivi;
class nsx
{
	private:
		char tennsx[20];
		char dcnsx[20];
	friend class hang;
	friend int dem_tv_lg(tivi *p, int n); 	
};
class date 
{
	private:
		int d;
		int m;
		int y;
	public :
		void nhap()
		{
			cout<<"Nhap ngay: ";cin>>d;
			cout<<"Nhap thang: ";cin>>m;
			cout<<"Nhap nam: ";cin>>y;		
		}
		void xuat()
		{
			cout<<d<<"/"<<m<<"/"<<y<<".";
		}		
};
class hang 
{
	protected :
		char tenhang[30];
		nsx x;
		int dongia;
	public :
		void nhap()
		{
			cout<<"Nhap ten hang: ";fflush(stdin);gets(tenhang);
			cout<<"Nhap don gia: ";cin>>dongia;
			cout<<"Nhap ten nha san xuat: ";fflush(stdin);gets(x.tennsx);
			cout<<"Nhap dia chi nha san xuat: ";fflush(stdin);gets(x.dcnsx);		
		}
		void xuat()
		{
			cout<<"Ten hang: "<<tenhang<<endl;
			cout<<"Don gia: "<<dongia<<endl;
			cout<<"Ten nha san xuat: "<<x.tennsx<<endl;
			cout<<"Dia chi nha san xuat: "<<x.dcnsx<<endl;	
		}
		friend int dem_tv_lg(tivi *p, int n);			
};
class tivi : public hang
{
	private :
		int kichthuoc;
		date ngaynhap;
	public :
		void input()
		{
			ngaynhap.nhap();
			cout<<"Nhap kich thuoc!";cin>>kichthuoc;
			hang::nhap();	
		}
		void output()
		{
			cout<<"Ngay nhap: ";ngaynhap.xuat();cout<<endl;
			cout<<"Kich thuoc: "<<kichthuoc<<endl;
			hang::xuat();
		}			
};
int dem_tv_lg(tivi*p, int n)
{
	int dem =0;
	for(int i=0;i<n;i++)
		if(strcmp(p[i].x.tennsx,"lg")==0)
			dem++;
	return dem;	
}
int main()
{
	int n;
	cout<<"Nhap so luong tivi!";cin>>n;
	tivi*a = new tivi[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin cho tivi thu "<<i<<" !\n";
		a[i].input();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Thong tin cau tivi thu "<<i<<" !\n";
		a[i].output();
	}	
	cout<<"So luong tivi LG trong danh sach: "<<dem_tv_lg(a,n);
	delete []a;
	return 0;
}
