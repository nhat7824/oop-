#include<bits/stdc++.h>
using namespace std;
class phanso
{
	private :
		int tu;
		int mau;
	public :
		phanso()
		{
			tu = 0;
			mau = 0;
		}	
		phanso(int a, int b)
		{
			tu = a;
			mau = b;
		}
		phanso operator * (phanso m)
		{
			phanso k;
			k.tu  = tu * m.tu;
			k.mau = mau * m.mau;
			return k;
		}
		float  operator ++ ()
		{
			return (float)tu/mau;
		}
		friend istream & operator >> (istream & is, phanso &p)
		{
			cout<<"Nhap gia tri cho tu so: ";is>>p.tu;
			cout<<"Nhap gia tri cho mua so: ";is>>p.mau;	
		} 
		friend ostream & operator << (ostream & os, phanso p)
		{
			cout<<p.tu<<"/"<<p.mau;
		}	
};
int main()
{
	phanso p,k(2,3),tich;
	tich = p * k;
	cin>>p;
	tich = p * k;
	freopen("PHANSO.txt","w",stdout);
	cout<<"Tich hai phan so la: "<<tich<<endl;
	cout<<"Gia tri cua phan so la: "<< ++p <<endl;
	return 0;
}