#include <bits/stdc++.h>
using namespace std;
class ban
{
	private:
	    char maban[20];
	    char tenban[20];
	    int ngaythanhlap;
	public:
		friend class truongdh; 
};
class khoa
{
	private :
	    char makhoa[20];
	    char tenkhoa[20];
	    char truongkhoa[20];
	public :
		friend class truongdh;    
};
class truong 
{
	private :
		char matruong[20];
		char tentruong[20];
		char diachi[20];
	public :
		void nhap()
		{
			cout<<"Nhap ma truong: ";fflush(stdin);gets(matruong);
			cout<<"Nhap ten truong: ";fflush(stdin);gets(tentruong);
			cout<<"Nhap dia chi truong: ";fflush(stdin);gets(diachi);
		}
		void xuat()
		{
			cout<<"Ma truong: "<<matruong<<endl;
			cout<<"Ten truong: "<<tentruong<<endl;
			cout<<"Dia chi truong: "<<diachi<<endl;
		}
};
class truongdh : public truong
{
	protected:
	    int n;
	    khoa x[100];
	    int m;
	    ban y[100];
	public:
	    void nhap()
	    {
	    	truong :: nhap();
	        cout << "Nhap so luong khoa! "; cin >> n;
	        cout << "Nhap so luong ban! "; cin >> m;
	        for (int i = 0; i < n; i++)
	        {
	            cout << "Nhap ma khoa thu " << i+1 << ":"; fflush(stdin); gets(x[i].makhoa);
	            cout << "Nhap ten khoa thu " << i+1 << ":"; fflush(stdin); gets(x[i].tenkhoa);
	            cout << "Nhap truong khoa thu " << i+1 << ":"; fflush(stdin); gets(x[i].truongkhoa);
	        }
	        for (int i = 0; i < m; i++)
	        {
	            cout << "Nhap ma ban thu " << i+1 << ":"; fflush(stdin); gets(y[i].maban);
	            cout << "Nhap ten ban thu " << i+1 << ":"; fflush(stdin); gets(y[i].tenban);
	            cout << "Nhap ngay thanh lap thu " << i+1 << ":"; cin >> y[i].ngaythanhlap;
	        }
	    }
	    void xuat()
	    {
	    	truong :: xuat();
	    	cout<<setw(40)<<"Thong tin ve cac khoa"<<endl;
	    	cout<<"stt"<<setw(15)<<"ma khoa"<<setw(15)<<"ten khoa"<<setw(15)
	    	<<"truong khoa"<<endl;
	        for (int i = 0; i < n; i++)
	        {
	        	cout<<i+1<<setw(15)<<x[i].makhoa<<setw(15)<<x[i].tenkhoa<<setw(15)
	    		<<x[i].truongkhoa<<endl;  
			}
			cout<<setw(40)<<"Thong tin ve cac ban"<<endl;
	    	cout<<"stt"<<setw(15)<<"ma ban"<<setw(15)<<"ten ban"<<setw(15)
	    	<<"ngay thanh lap"<<endl;			
	        for (int i = 0; i < m; i++)
	        {
		    	cout<<i+1<<setw(15)<<y[i].maban<<setw(15)<<y[i].tenban<<setw(15)
		    	<<y[i].ngaythanhlap<<endl;	        	
	        }	    	
		}
};
int main()
{
	truongdh a;
	cout<<setw(40)<<"Nhap thong tin cho truong dai hoc!"<<endl;
	a.nhap();
	cout<<setw(40)<<"Thong tin cho truong dai hoc da nhap la!"<<endl;
	a.xuat();	
	return 0;
}

