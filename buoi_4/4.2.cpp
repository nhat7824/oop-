#include<bits/stdc++.h>
using namespace std;
class printer 
{
	protected :
	char hangsx[20];
	int namsx;
	float trongluong , tocdo;
};
class  laserprinter : public printer
{
	private :
		char dophangia[10];
	public :
		laserprinter()
		{
			*hangsx = NULL;
			*dophangia = NULL;
			namsx = 0;
			trongluong = 0;
			tocdo = 0;
		};
		void nhap()
		{
			cout<<"Nhap thong tin co may in laser!\n";
			cout<<"Nhap hang san xuat: ";fflush(stdin);gets(hangsx);
			cout<<"Nhap nam san xuat: ";cin>>namsx;
			cout<<"Nhap trong luong: ";cin>>trongluong;
			cout<<"Nhap toc do: ";cin>>tocdo;			
			cout<<"Nhap do phan giai: ";fflush(stdin);gets(dophangia);
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin may in laser!\n";
			cout<<"Hang san xuat"<<setw(20)<<"Nam san xuat"<<setw(20)
				<<"Trong luong may"<<setw(20)<<"Toc do may"<<setw(20)
				<<"Do phan giai"<<endl;		
			cout<<hangsx<<setw(20)<<namsx<<setw(20)
				<<trongluong<<setw(20)<<tocdo<<setw(20)
				<<dophangia<<endl;		
		}	
};
class dotprinter : public printer
{
	private :
		char matdokim[10];
	public :
		void nhap()
		{
			cout<<"Nhap thong tin co may in kim!\n";
			cout<<"Nhap hang san xuat: ";fflush(stdin);gets(hangsx);
			cout<<"Nhap nam san xuat: ";cin>>namsx;
			cout<<"Nhap trong luong: ";cin>>trongluong;
			cout<<"Nhap toc do: ";cin>>tocdo;			
			cout<<"Nhap mat do kim: ";fflush(stdin);gets(matdokim);
		}
		void xuat()
		{
			cout<<setw(40)<<"Thong tin may in kim!\n";
			cout<<"Hang san xuat"<<setw(20)<<"Nam san xuat"<<setw(20)
				<<"Trong luong may"<<setw(20)<<"Toc do may"<<setw(20)
				<<"Mat di kim"<<endl;		
			cout<<hangsx<<setw(20)<<namsx<<setw(20)
				<<trongluong<<setw(20)<<tocdo<<setw(20)
				<<matdokim<<endl;	
		}
};
main ()
{
	dotprinter dot;
	laserprinter laser;
	dot.nhap();
	laser.nhap();
	dot.xuat();
	laser.xuat();
}
