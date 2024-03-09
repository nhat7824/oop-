#include<bits/stdC++.h>
using namespace std;
class mang
{
	private :
		int  n;
		float * mang ;
			
	public :
		void nhap()
		{
			cout << "Nhap so luong phan tu cho mang: ";
			cin >> n;
			mang = new float [n];
			for(int i = 0;i < n;i ++)
			{
				cout << "Nhap gia tri cho phan tu thu " << i + 1 <<" :";
				cin >> mang[i];
			}	 
		}	
		void xuat()
		{
			for(int i = 0;i < n;i ++) 
				cout << mang[i] << " ";
		}
		float max()
		{
			float max = mang[0];
			for(int i = 0;i < n;i ++)
				if(mang[i] > max)
					max = mang[i];
			return max;		
		}
		float min()
		{
			float min = mang[0];
			for(int i = 0;i < n;i ++)
				if(mang[i] < min)
					min = mang[i];
			return min;		
		}

};
main()
{
	mang a;
	a.nhap();
	a.xuat();
	cout<<"Gia tri lon nhat trong mang la: "<<a.max();
	cout<<"Gia tri nho nhat trong mang la: "<<a.min();

}
