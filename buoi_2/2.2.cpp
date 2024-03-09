#include<bits/stdC++.h>
using namespace std;
class nsx
{
	private :
		char mansx[10];
		char tennsx[10];
		char dcnsx[10];

	public :
		void nhap ()
		{
			cout << "Nhap ma nha san xuat: "; fflush(stdin); gets(mansx);
			cout << "Nhap ten nha san xuat: "; fflush(stdin); gets(tennsx);
			cout << "Nhap dia chi nha san xuat: "; fflush(stdin); gets(dcnsx);

		}
		void xuat()
		{
			cout << "Ma nha san xuat La: " << mansx <<endl;
			cout << "Ten nha san xuat La: " << tennsx <<endl;
			cout << "Dia nha san xuat La: " << dcnsx <<endl;
	
		}
};
class hang
{
	private :
		char mahang[10];
		char tenhang[10];
		nsx x;

	public :
		void nhap ()
		{
			cout << "Nhap ma hang: "; fflush(stdin); gets(mahang);
			cout << "Nhap ten hang: "; fflush(stdin); gets(tenhang);
			x.nhap();
		
		}
		void xuat()
		{
			cout << "Ma hang La: " << mahang <<endl;
			cout << "Ten hang La: " << tenhang <<endl;
			x.xuat();
		
		}
}; 
main()
{
	hang a;
	a.nhap();
	a.xuat();

}
