#include<bits/stdc++.h>
using namespace std;
class hang
{
	protected :
		char mapt[30];
		char loai[30];
		char hang_sx[30];
		int nam_sx;	
	public :
		void nhap()
		{
			cout<<"Nhap ma: ";fflush(stdin);gets(mapt);	
			cout<<"Nhap loai: ";fflush(stdin);gets(loai);	
			cout<<"Nhap hang san xuat: ";fflush(stdin);gets(hang_sx);	
			cout<<"Nhap nam san xuat: ";cin>>nam_sx;		
		}
		void xuat()
		{
			cout<<mapt<<setw(15)<<loai<<setw(15)<<hang_sx<<setw(15)<<nam_sx;
		}	
};
class gianhang ;
class hop : public hang
{
	private :
		char kieudang[30];
		char chatlieu[30];
		char ghichu[30];
		float thetich;
	public :
		void nhap()
		{
			hang::nhap();
			cout<<"Nhap kieu dang: ";fflush(stdin);gets(kieudang);	
			cout<<"Nhap chat lieu: ";fflush(stdin);gets(chatlieu);	
			cout<<"Nhap ghi chu: ";fflush(stdin);gets(ghichu);	
			cout<<"Nhap the tich: ";cin>>thetich;			
		}
		void xuat()
		{
			hang::xuat();
			cout<<setw(15)<<kieudang<<setw(15)<<chatlieu<<setw(15)<<thetich<<setw(15)<<ghichu;
		}
		friend void xapsep(gianhang & g);	
};
class gianhang
{
	private :
		char magh[30];
		char tengh[30];
		int solo;
		hop *x;
		int n;
	public :
		void nhap()
		{
			cout<<"Nhap ma gian hang: ";fflush(stdin);gets(magh);	
			cout<<"Nhap ten gian hang: ";fflush(stdin);gets(tengh);		
			cout<<"Nhap so lo : ";cin>>solo;
			cout<<"Nhap so luong hop: ";cin>>n;
			x = new hop [n];
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin cho hop thu"<<i+1<<"!\n";
				x[i].nhap();
			}						
		}
		void xuat()
		{
			cout<<"Ma gian hang: "<<magh<<setw(30)<<"Ten gian hang: "<<tengh<<setw(30)<<"So lo: "<<solo<<endl;
			cout<<"Stt"<<setw(15)<<"Ma pt"<<setw(15)<<"Loai"<<setw(15)<<"Hang san xuat"<<setw(15)<<"nam san xuat"
			<<setw(15)<<"kieu dang"<<setw(15)<<"chat lieu"<<setw(15)<<"the tich"<<setw(15)<<"ghi chu"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<i+1<<setw(15);
				x[i].xuat();
				cout<<endl;
			}
		delete [] x	;
		}
		friend	void sua(gianhang & g);
		friend void xapsep(gianhang & g);
};
void sua(gianhang & g)
{
	char temp[30];
	cout<<"Ten gian hang doi thanh: ";fflush(stdin);gets(temp);
	strcpy(g.tengh,temp);		
}
void xapsep(gianhang & g)
{
	for(int i=0;i<g.n-1;i++)
		for(int j=i+1;j<g.n;j++)
			if(g.x[j].thetich<g.x[i].thetich)
			{
				hop tg = g.x[j];
					g.x[j] = g.x[i];
					g.x[i] = tg;				
			}
}
int main()
{
	gianhang a ;
	cout<<"==========Nhap thong tin cho gian hang!==========\n";
	a.nhap();
	cout<<"==========Thong tin cau gian hang!==========\n";	
	a.xuat();
	sua(a);
	xapsep(a);
	cout<<"==========Thong tin cau gian hang sau chinh sua!==========\n";	
	a.xuat();	
	return 0;
}
