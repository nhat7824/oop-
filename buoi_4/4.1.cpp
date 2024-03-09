#include<bits/stdc++.h>
using namespace std;
class person
{
	protected :
		char hoten[10];
		char quequan[10];
		char ngaysinh[2];
};
class kysu : public person
{
	private :
		char nganh[20];
		int namtn;
	public :
		void nhap()
		{
			cout<<"Nhap ho ten ky su: ";fflush(stdin);gets(hoten);
			cout<<"Nhap que quan ky su: ";fflush(stdin);gets(quequan);
			cout<<"Nhap ngay sinh ky su: ";fflush(stdin);gets(ngaysinh);
			cout<<"Nhap nam tot nghiep: ";cin>>namtn;
		}
		void xuat()
		{
			cout<<"Ho ten"<<setw(20)<<"Que quan"<<setw(20)<<"Ngay sinh"<<setw(20)<<"Nam tot nghiep"<<endl;
			cout<<hoten<<setw(20)<<quequan<<setw(20)<<ngaysinh<<setw(20)<<namtn<<endl;
		}
		friend void xuatntn(kysu *a,int n);
};
void xuatntn(kysu *a,int n)
{
	int max = a[0].namtn;
	for(int i =0;i<n;i++)
		if(a[i].namtn>max)
			max = a[i].namtn;	
	for(int i =0;i<n;i++)
		if(a[i].namtn == max)
			a[i].xuat();		
}
main ()
{
	int n;
	cout<<"Nhap so luong ky su: ";cin>>n;
	kysu *a = new kysu [n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin ky su thu "<< i + 1<<" !"<<endl;
		a[i].nhap();
	}
	freopen("output","w",stdout);
	xuatntn(a,n);	
	delete []a;
}
