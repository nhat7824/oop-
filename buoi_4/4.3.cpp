#include<bits/stdc++.h>
using namespace std;
class vehicle
{
	protected :
		char nhanhieu[30];
		char hang[30];
		int  namsx;
	public:
		void nhap()
		{
			cout<<"Nhap nhan hieu: ";fflush(stdin);gets(nhanhieu);
			cout<<"Nhap hang: ";fflush(stdin);gets(hang);
			cout<<"Nhap nam san xuat: ";cin>>namsx;			
		}
		void xuat()
		{
			cout<<nhanhieu<<setw(20)<<hang<<setw(20)<<namsx<<setw(20);
		}
};
class oto : public vehicle
{
	private :
		int sochongoi;
		float dungtich;
	public :
		void nhap()
		{
			cout<<"Nhap thong tin cho xe o to!\n";
			cout<<"Nhap so cho ngoi: ";cin>>sochongoi;
			cout<<"Nhap dung tich: ";cin>>dungtich;
			vehicle::nhap();
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin xe o to!\n";
			cout<<"Nhan hieu"<<setw(20)<<"Hang"<<setw(20)<<"Nam san xuat"<<setw(20)
			<<"So cho ngoi"<<setw(20)<<"Dung tich"<<endl;
			vehicle::xuat();			
			cout<<sochongoi<<setw(20)<<dungtich<<endl;	
		}	
};
class moto : public vehicle
{
	private :
		float phankhoi;
	public :
		void nhap()
		{
			cout<<"Nhap thong tin cho xe mo to!\n";
			cout<<"Nhap so phan khoi: ";fflush(stdin);cin>>phankhoi;
			vehicle::nhap();			
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin xe mo to!\n";
			cout<<"Nhan hieu"<<setw(20)<<"Hang"<<setw(20)<<"Nam san xuat"<<setw(20)
			<<"Phan khoi"<<endl;
			vehicle::xuat();			
			cout<<phankhoi<<endl;		
		}
};
main ()
{
	oto a;
	moto b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();	

}
