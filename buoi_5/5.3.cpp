#include<iostream>
using namespace std;
class tamthuc
{
	private :
		int a,b,c;
	public :
		friend istream & operator >>(istream & is,tamthuc&p)
		{
			cout<<"Nhap he so cho x^2: ";is>>p.a;
			cout<<"Nhap he so cho x^1: ";is>>p.b;
			cout<<"Nhap he so cho x^0: ";is>>p.c;			
			return is;	
		} 
		friend ostream & operator <<(ostream & os,tamthuc p)
		{
			os<<p.a<<"x^2"<<"+"<<p.b<<"x"<<"+"<<p.c<<endl;
			return os;	
		}
		tamthuc operator + (tamthuc f)
		{
			tamthuc m;
			m.a = a + f.a;
			m.b = b + f.b;
			m.c = c + f.c;
			return m;
		} 
		tamthuc operator - (tamthuc f)
		{
			tamthuc m;
			m.a = a - f.a;
			m.b = b - f.b;
			m.c = c - f.c;
			return m;
		}
		tamthuc operator - ()
		{
			tamthuc k;
			k.a = - a;
			k.b = - b;
			k.c = - c;
			return k;
		}				
};
main()
{
	tamthuc x,y,tong,hieu,aphay;
	cin>>x;
	cin>>y; 
	tong = x + y;
	hieu = x - y;
	cout<<"Tong hai tam thuc la: "<< tong;
	cout<<"Hieu hai tam thuc la: "<< hieu;
	cout<<"Tam thuc sau khi doi dau la: "<<-x;	
}
