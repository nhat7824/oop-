#include<iostream>
using namespace std;
class sophuc
{
	private :
		int thuc;
		int ao;
	public :
		friend istream & operator >>(istream & is,sophuc&p)
		{
			cout<<"Nhap phan thuc: ";is>>p.thuc;
			cout<<"Nhap phan ao: ";is>>p.ao;
			return is;	
		} 
		friend ostream & operator <<(ostream & os,sophuc&p)
		{
			os<<p.thuc<<"+"<<"i*"<<p.ao<<endl;
			return os;	
		}
		friend sophuc operator + (sophuc b)
		{
			sophuc c;
			c.thuc = a.thuc + b.thuc;
			c.ao = a.ao + b.ao;
			return c;
		} 
		friend sophuc operator - (sophuc a,sophuc b)
		{
			sophuc c;
			c.thuc = a.thuc - b.thuc;
			c.ao = a.ao - b.ao;
			return c;
		}
};
main()
{
	sophuc a,b,tong,hieu;
	cin>>a;
	cin>>b;
	tong = a + b;
	hieu = a - b;
	cout<<"Tong hai so phuc la: "<< tong;
	cout<<"Hieu hai so phuc la: "<< hieu;
}
