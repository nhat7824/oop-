#include<bits/stdC++.h>
using namespace std;
class mang
{
	private :
		int  n;
		int  * mang;		
	public :
		void nhap()
		{
			cout << "Nhap so luong phan tu cho mang: ";
			cin >> n;
			mang = new int [n];
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
		void sapxep()
		{
			for(int i = 0;i < n ;i ++)
				for(int j = i + 1;j < n ;j ++)	
					if(mang[j] < mang[i])
					{
						int tg = mang[i];
							mang[i] = mang[j];
							mang[j] = tg;
					}
		}
};
main()
{
	mang a;
	a.nhap();
	a.sapxep();
	a.xuat();

}
