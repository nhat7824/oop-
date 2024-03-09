#include<bits/stdc++.h>
using namespace std;
class thuadat
{
	private :
		float chieudai,chieurong,giatien;
	public :
		thuadat()
		{
			this -> chieudai =0;
			this -> chieurong =0;	
			this -> giatien =0;	
		}
		float operator ++ ()
		{
			return (float)chieudai*chieurong;
	 	}
		bool operator == (thuadat a)
		{
			if( chieudai * chieurong == a.chieudai * a.chieurong && giatien ==a.giatien )
				return true ;
			else 
				return false ;	
		} 
		friend istream & operator >>(istream & is,thuadat &a)
		{
			cout<<"Nhap chieu dai: ";is>>a.chieudai;
			cout<<"Nhap chieu rong: ";is>>a.chieurong;
			cout<<"Nhap gia tien: ";is>>a.giatien;
		}
		friend ostream & operator <<(ostream & os,thuadat b)
		{
			cout<<"Chieu dai: ";os<<b.chieudai;
			cout<<"Chieu rong: ";os<<b.chieurong;
			cout<<"Gia tien: ";os<<b.giatien;			
		}
};
main()
{
	thuadat a,b;
	cout<<"Nhap thong tin cho thua dat thu 1!\n";
	cin>>a;
	cout<<"Nhap thong tin cho thua dat thu 2!\n";
	cin>>b;	
	freopen("thuadat.txt","w",stdout);
	cout<<"thong tin cho thua dat thu 1"<<a<<endl;
	cout<<"thong tin cho thua dat thu 2"<<b<<endl;
	if(a == b)
		cout<<"Hai thua dat co cung dien tich va gia tien! \n";
	else
		cout<<"Hai thua dat khong cung dien tich va gia tien! \n";	
}