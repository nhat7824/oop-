#include <iostream>
#include <string.h>
using namespace std;
class DongVat 
{
	protected:
	    char giong[20];
	public:
		DongVat(char *g) 
		{
			strcpy(this->giong,giong);
		}
	    virtual void nhap() = 0;
	    virtual void in() = 0;
};
class ConCho : public DongVat 
{
	protected:
	    char ten[10];
	public:
		ConCho(char *giong, char *ten) : DongVat(giong) 
		{
			strcpy(this->ten, ten);
		}
	    virtual void nhap() 
		{
	        cout << "Nhap giong dong vat: ";
	        fflush(stdin);
	        gets(giong);
	        cout << "Nhap ten cho: ";
	        fflush(stdin);
	        gets(ten);
	    };
	    virtual void in() 
		{
	        cout << "Giong: " << giong << endl;
	        cout << "Ten: " << ten << endl;
	    };
};
class ConGa : public DongVat 
{
	private:
	public:	
		ConGa(char *giong) : DongVat(giong) {};
	    virtual void nhap() 
		{
	        cout << "Nhap giong: ";
	        fflush(stdin);
	        gets(giong);
	    };
	    virtual void in() 
		{
	        cout << "Giong: " << giong << endl;
	        cout << "Khong co ten!" << endl;
	    };
};
int main() 
{
    ConCho cho("Cho", "Fox");
    ConGa ga("Ga");
    cho.in();
    ga.in();
    return 0;
}
