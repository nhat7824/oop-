#include<bits/stdc++.h>
using namespace std;
class hop
{
	private :
		float h,r,g;
	public :
		hop()
		{
			h = 0.0;
			r = 0.0;
			g = 0.0;
		}
		friend istream & operator >> (istream & is , hop &m)
		{
			cout<<"Nhap chieu cao cua hop: ";is>>m.h;
			cout<<"Nhap ban kinh cua hop: ";is>>m.r;
			cout<<"Nhap trong luong cua hop: ";is>>m.g;	
			return is;	
		}
		friend ostream & operator << (ostream & os , hop m)
		{
			cout<<"Chieu cao cua hop la: ";os<<m.h;cout<<endl;
			cout<<"Ban kinh cua hop la: ";os<<m.r;cout<<endl;
			cout<<"Trong luong cua hop la: ";os<<m.g;cout<<endl;
			return os;
		}
		hop operator + (hop k)
		{
			hop p;
			if(r == k.r)
			{
				p.r = k.r;
				p.h = k.h + h;
				p.g = k.g + g;
			}
			else
			{
				p.r = 0;
				p.h = 0;
				p.g = 0;				
			}
			return p;
		}
		bool operator ++ ()
		{
			if(r*r*3.14<5)
				return true;
			else 
				return false;	
		}
			
};
main ()
{
	hop h,k,tong;
	cout<<"Nhap thong tin cho hop thu nhat!\n";
	cin>>h;
	cout<<"Nhap thong tin cho hop thu hai!\n";	
	cin>>k;
	tong = h + k;	 
	cout<<"Tong hai hop la!"<<endl<<tong<<endl;
	if(++h)
		cout<<"Hop co dien tich day nho hon 5 ! ";
	else 
		cout<<"Hop co dien tich day lon hon 5 ! ";	
}