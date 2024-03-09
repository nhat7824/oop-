#include<bits/stdc++.h>
using namespace std;
class hcn
{
	private :
		float d;
		float r;	
	public :
		void nhap()
		{
		cout<<"Nhap chieu dai: ";
		cin>>d;
		cout<<"Nhap chieu rong: ";
		cin>>r;
		}
		void ve()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<d;j++)
					cout<<"* ";
			cout<<endl;	
			}		
		}
		float chuvi()
			return (r+d)*2;
		float dientich()
			return r*d;
};
main()
{
	hcn x;
	x.nhap();
	x.ve();
	cout<<"Chu vi hinh chu nhat da nhap la: "<<x.chuvi()<<endl;
	cout<<"Dien tich hinh chu nhat da nhap la: "<<x.dientich()<<endl;
}

