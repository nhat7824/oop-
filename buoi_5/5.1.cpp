#include<iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class phanso
{
	private :
		int tu;
		int mau;
	public :
		friend istream & operator >>(istream & is,phanso&p)
		{
			cout<<"Nhap tu so: ";is>>p.tu;
			cout<<"Nhap mau so: ";is>>p.mau;
			return is;	
		} 
		friend ostream & operator <<(ostream & os,phanso&p)
		{
			os<<p.tu<<"/"<<p.mau<<endl;
			return os;	
		}
		phanso operator + (phanso m)
		{
			phanso f;
			f.tu = mau * m.tu + m.mau * tu;
			f.mau = mau * m.mau;
			return f;
		} 
		float operator ++()
		{
			return tu / mau;
		}
		phanso operator - ()
		{
			phanso k;
			k.tu = -tu;
			k.mau = mau;
			return k ;
		}
};
main()
{
	phanso a,b,tong;
	cin>>a;
	cin>>b;
	tong = a + b;	
	ofstream file ("output.txt",ios::out);
	if(file.good()){	}
	file<<"Tong hai phan so la: "<< tong;
	a = -a;
	file<<"Phan so sau khi doi dau la: "<<a;
	file<<"Gia tri cua phan so la: "<<++a;
	file.close();
}
