#include<bits/stdc++.h>
using namespace std;
class sinhvien
{
	private :
	char masv[10];
	char hoten[30];
	int tuoi;
	public :
		friend istream& operator >> (istream& is,sinhvien &p);
		friend ostream& operator << (ostream& os,sinhvien p);
};
istream& operator >> (istream& is,sinhvien &p)
{
	cout<<"Nhap ma sinh vien ";fflush(stdin);gets(p.masv);
	cout<<"Nhap ho ten sinh vien ";fflush(stdin);gets(p.hoten);
	cout<<"Nhap tuoi sinh vien ";cin>>p.tuoi;
	return is;
}
ostream& operator << (ostream& os,sinhvien p)
{
	os<<setw(20)<<p.masv<<setw(20)<<p.hoten<<setw(20)<<p.tuoi;
	return os;
}
int main()
{
    sinhvien a;
    ofstream file("output.txt"); 
    cin >> a;
    cout << a;
    file << a;
    file.close();
    return 0;
}
