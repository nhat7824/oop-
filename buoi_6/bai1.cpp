#include<bits/stdc++.h>
using namespace std;
class ban
{
	private:
	char maban[20];
	char tenban[20];
	int ngaythanhlap;
};
class khoa
{
	private:
	char makhoa[20];
	char tenkhoa[20];
	char truongkhoa[20];
};
class truongdh
{
	private :
		int n;
		khoa x[100];
		int m;
		ban y[100];
	public :
		void nhap()
		{
			cout<<"Nhap so luong khoa!";cin>>n;
			cout<<"Nhap so luong ban!";cin>>m;
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap ma khoa thu"<<i<<":";fflush(stdin);gets(x[i].makhoa);
				cout<<"Nhap ten khoa thu"<<i<<":";fflush(stdin);gets(x[i].tenkhoa);
				cout<<"Nhap truong khoa thu"<<i<<":";fflush(stdin);gets(x[i].truongkhoa);
			}
			for(int i=0;i<m;i++)
			{
				cout<<"Nhap ma ban thu"<<i<<":";fflush(stdin);gets(y[i].maban);
				cout<<"Nhap ten ban thu"<<i<<":";fflush(stdin);gets(y[i].tenban);
				cout<<"Nhap ngay thanh lap thu"<<i<<":";cin>>y[i].ngaythanhlap;
			}					
	    }	

};
int main()
{
	return 0
}

