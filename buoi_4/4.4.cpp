#include<bits/stdc++.h>
using namespace std;
class electronic
{
	protected :
		float congsuat;
		float dienap;
	public:
		electronic(float cs,float da) 
		{
			congsuat = cs;
			dienap = da;
		}
};
class maygiat :public electronic
{
	private :
		float dungtich;
		char loai[30];
	public :
		maygiat()
		{
			dungtich = 0;
			*loai = NULL;
			congsuat = 0;
			dienap = 0;
		}
		maygiat(float cs, float da, float dt, char *l) : electronic(congsuat,dienap)
		{
			dungtich = dt;
			strcpy(loai,l);
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin cua may giat!\n";
			cout<<"Cong suat"<<setw(20)<<"Dien ap"<<setw(20)<<"Dung tich"<<setw(20)<<"Loai"<<endl;
			cout<<congsuat<<setw(20)<<dienap<<setw(20)<<dungtich<<setw(20)<<loai<<endl;
		}	
};
class tulanh :public electronic
{
	private :
		float dungtich;
		int songan;
	public :
		tulanh(float cs, float da, float dt, int sn):electronic(cs,da)
		{
			dungtich = dt;
			songan = sn;
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin cua tu lanh!\n";
			cout<<"Cong suat"<<setw(20)<<"Dien ap"<<setw(20)<<"Dung tich"<<setw(20)<<"So ngan"<<endl;
			cout<<congsuat<<setw(20)<<dienap<<setw(20)<<dungtich<<setw(20)<<songan<<endl;
		}	
};
main ()
{
	tulanh tl(200.0,150.5,12,6);
	maygiat mg(150.7, 123.4, 10.5, "cua ngang");
	freopen("output.txt","w",stdout);
	tl.xuat();
	mg.xuat();
}
