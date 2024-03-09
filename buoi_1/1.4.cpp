#include<bits/stdC++.h>
using namespace std;
class sach
{
	private :
		char masach[10];
		char tensach[10];
		char nsb[10];
		int sotrang;
		float giatien;
	public :
		void nhap()
		{
			cout<<"Nhap ma sach: "; fflush(stdin); gets(masach);
			cout<<"Nhap ten sach: "; fflush(stdin); gets(tensach);
			cout<<"Nhap nha xuat ban: "; fflush(stdin); gets(nsb);
			cout<<"Nhap so trang: "; cin>>sotrang;
			cout<<"Nhap gia tien: "; cin>>giatien;
		}	
		void xuat()
		{
			cout<<"Ma cua sach la: "<<masach;
			cout<<setw(20)<<"Ten cua sach la: "<<tensach;
			cout<<setw(20)<<"Nha xuat ban cua sach la: "<<nsb;
			cout<<setw(20)<<"So trang cua sach la: "<<sotrang;
			cout<<setw(20)<<"Gia cua sach la: "<<giatien;
		}
};
main()
{
	int n;
	cout<<"Nhap so luong sach: ";
	cin>>n;
	sach *a = new sach[n];
	for(int i = 0;i < n;i ++)
	{
		cout<<setw(40)<<"Nhap thong tin cho quyen sach thu "<<i + 1<<"!"<<endl;
		a[i].nhap();
	}
	for(int i = 0;i < n;i ++)
	{
		cout<<setw(40)<<"Thong tin cua quyen sach thu "<<i + 1<<" da nhap la!"<<endl;
		a[i].xuat();
	}

}
