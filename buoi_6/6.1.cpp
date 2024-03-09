#include<bits/stdc++.h>
using namespace std;
template <class t> class ARRAY //template <class t>
{
	private:
		t *value;
		int n;
	public:
		ARRAY()
		{
			n = 0;
			value = NULL;	
		}
		ARRAY(int x)
		{
			n = x;
			value = new t[n];
			for(int i=0; i<n; i++)
				value[i] = 0;
		}
		void nhap()
		{
			cout<<"n=";cin>>n;
			value = new t[n];
			for(int i=0; i<n; i++)
			{
				cout<<"value["<<i<<"]=";
				cin>>value[i];
			}			
		}
		void xuat()
		{
			for(int i=0; i<n; i++)
				cout<<" "<<value[i];
			cout<<endl;	
		}
};
main()
{
	ARRAY <int> a;
	a.nhap();
	a.xuat();
	ARRAY <float> b;
	b.nhap();
	b.xuat();
}
