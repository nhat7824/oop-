#include<bits/stdc++.h>
using namespace std;
class phong
{
	private :
		char maphieu[30];
		char ngaykiem[30];
		char nhanvienkiem[30];
		char chucvu[30];
		char phong[30];
		char maphong[30];
		char truongphong[30];
	public :
		void nhap()
		{
			cout<<"Nhap ma phieu: ";fflush(stdin);gets(maphieu);
			cout<<"Nhap ngay kiem: ";fflush(stdin);gets(ngaykiem);
			cout<<"Nhap nhan vien kiem phieu: ";fflush(stdin);gets(nhanvienkiem);
			cout<<"Nhap chuc vu: ";fflush(stdin);gets(chucvu);
			cout<<"Nhap phong: ";fflush(stdin);gets(phong);
			cout<<"Nhap ma phong: ";fflush(stdin);gets(maphong);
			cout<<"Nhap truong phong: ";fflush(stdin);gets(truongphong);	
		}
		void xuat()
		{
			cout<<setw(5)<<"Ma phieu: "<<maphieu<<setw(40)<<"Ngay kiem phieu: "<<ngaykiem<<endl;
			cout<<setw(5)<<"Nhan vien kiem phieu: "<<nhanvienkiem<<setw(40)<<"Chuc vu: "<<chucvu<<endl;
			cout<<setw(5)<<"Phong: "<<phong<<setw(40)<<"Ma phong: "<<maphong<<endl;
			cout<<setw(5)<<"Truong phong: "<<truongphong<<endl;
		}	
};
class phieu;
class taisan
{
	private:
		char ten[30];
		char tinhtrang[30];
		int soluong;
	public :
		void nhap()
		{
			cout<<"Nhap ten tai san: ";fflush(stdin);gets(ten);
			cout<<"Nhap so luong tai san: ";cin>>soluong;
			cout<<"Nhap tinh trang cua tai san: ";fflush(stdin);gets(tinhtrang);
		}	
		void xuat()
		{
			cout<<setw(5)<<ten<<setw(30)<<soluong<<setw(30)<<tinhtrang<<endl;	
		}
		friend class phieu;
		friend void sua(phieu & m);
		friend void sapxep(phieu & m);
		friend void chen(phieu & m);
};
class phieu
{
	private:
		phong a;
		taisan *x;
		int n;
	public :
		void nhap()
		{
			a.nhap();
			cout<<"Nhap so luong tai san: ";cin>>n;
			x = new taisan[n];
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin cho tai san thu"<<i+1<<"!\n";
				x[i].nhap();
			}		

		}	
		void xuat()
		{
			int tong=0;			
			a.xuat();
			cout<<setw(5)<<"Ten tai san"<<setw(30)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
			for(int i=0;i<n;i++)
			{
				x[i].xuat();
			}
			for(int i=0;i<n;i++)
			{
				tong +=x[i].soluong;
			}				
			cout<<setw(5)<<"So tai san kiem ke: "<<n<<setw(30)<<"Tong so luong: "<<tong<<endl;							
		}
		friend void sua(phieu & m);	
		friend void sapxep(phieu & m);
		friend void chen(phieu & m);
};
void sua(phieu & m)
{
	int dem = 0;
	for(int i=0;i<m.n;i++)
	{
		if(strcmp(m.x[i].ten,"may vi tinh")==0);
		{
			cout<<"Nhap so luong may tinh : ";cin>>m.x[i].soluong;
			dem++;
		}		
	}			
	if(dem==0) 
		cout<<setw(5)<<"Trong phieu khong co may vi tinh! ";		
}
void sapxep(phieu & m)
{
	for(int i=0;i<m.n-1;i++)
		for(int j=i+1;j<m.n;j++)
			if(m.x[j].soluong<m.x[i].soluong)
			{
				taisan tg = m.x[j];
				    	m.x[j] = m.x[i];
				    	m.x[i] = tg;
			}
}
void chen(phieu & m)
{
	int vt;
	taisan p ;
	do
	{
		cout<<"Nhap vi tri can chen!";cin>>vt;
	}while(vt<0||vt>m.n)
	cout<<"Nhap thong tin cho san pham chen";p.nhap();
	m.n++;
	m.x[m.n-1].nhap();
}
int main()
{
	phieu p;
	p.nhap();
	cout<<"=========PHIEU KIEM KE TAI SAN=========\n";
	p.xuat();
//	sua(p);
//	sapxep(p);
	chen(p);
	cout<<"=========PHIEU SAU KHI CHINH SUA=========\n";
	p.xuat();	
	return 0;
}