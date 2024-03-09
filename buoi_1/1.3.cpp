#include<bits/stdc++.h>
using namespace std;
class hang
{
	private :
		char mahang[10];
		char tenhang[10];
		float dongia;
		int soluong;
	public :
		void nhap()
		{
			cout<<"Nhap ma hang: ";fflush(stdin);gets(mahang);
			cout<<"Nhap ten hang: ";fflush(stdin);gets(tenhang);
			cout<<"Nhap don gia: ";cin>>dongia;
			cout<<"Nhap so luong: ";cin>>soluong;
		}
		void xuat()
		{
			cout<<"Ma hang la: "<<mahang;
			cout<<setw(20)<<"Ten hang la: "<<tenhang;
			cout<<setw(20)<<"Don gia la: "<<dongia;
			cout<<setw(20)<<"So luong la: "<<soluong;	
		}
};
main ()
{
	int n;
	cout<<"Nhap so luong hang: ";
	cin>>n;
	hang *a = new hang [n] ;
	for(int i = 0;i < n;i ++)
	{
		cout<<setw(60)<<"Nhap thong tin cua hang thu "<<i + 1<<"!"<<endl;
		a[i].nhap();
	}
		for(int i = 0;i < n;i ++)
	{
		cout<<setw(60)<<"Thong tin cua hang thu "<<i + 1<<" da nhap la!"<<endl;
		a[i].xuat();
	}
}
