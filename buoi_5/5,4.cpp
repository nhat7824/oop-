#include<bits/stdc++.h>
using namespace std;
class matran
{
	private:
		int cot;
		int hang;
		double a[100][100];
	public:
		friend istream & operator >>(istream & is,matran&p)
		{
			cout<<"So luong cot: ";is>>p.cot;
			cout<<"So luong hang: ";is>>p.hang;
			for(int i=0;i<p.hang;i++)
				for(int j=0;j<p.cot;j++)
				{
					cout<<"Nhap gia tri cho phan tu ["<<i<<"]["<<j<<"]=";
					is>>p.a[i][j];
				}		
			return is;	
		}
		friend ostream & operator <<(ostream & os,matran p)
		{
			for(int i=0;i<p.hang;i++)
			{
				for(int j=0;j<p.cot;j++)
					os<<p.a[i][j]<<" ";
				os<<endl;	
			}
			return os;
		} 
		friend matran operator - (matran &p)
		{
			for(int i=0;i<p.hang;i++)
				for(int j=0;j<p.cot;j++)
				{
					p.a[i][j] = - p.a[i][j];
				}
			return p;		
		}
		friend matran operator - (matran p ,matran k)
		{
			matran c;
			for(int i=0;i<p.hang;i++)
				for(int j=0;j<p.cot;j++)
				{
					c.a[i][j] =  p.a[i][j] - k.a[i][j];
				}
			return c;				
		}
		friend matran operator + (matran p ,matran k)
		{
			matran c;
			for(int i=0;i<p.hang;i++)
				for(int j=0;j<p.cot;j++)
				{
					c.a[i][j] =  p.a[i][j] + k.a[i][j];
				}
			return c;				
		}		
};
main ()
{
	matran a,b,tong,hieu;
	cout<<setw(40)<<"Nhap thong tin cho ma tran thu nhat!\n";
	cin>>a;
	cout<<setw(40)<<"Nhap thong tin cho ma tran thu nhat!\n";
	cin>>b;	
	tong = a + b;
	hieu = a - b; 
    cout<<"Tong hai ma tran da nhap la!\n"<<tong;
    cout<<"Hieu hai ma tran da nhap la!\n"<<hieu;
	cout<<setw(40)<<"Ma tran sau khi doi dau la!\n"<<-a;    
}

