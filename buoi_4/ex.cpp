#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class hinh
{
protected:
    char mausac[30];
    char vien[30];

public:
    hinh(char *ms, char *vi)
    {
        strcpy(mausac, ms);
        strcpy(vien, vi);
    }

    void xuat()
    {
        cout << setw(20) << mausac << setw(20) << vien;
    }
};

class hcn : public hinh
{
private:
    float d;
    float r;

public:
    hcn(char *ms, char *vi, float x, float y) : hinh(ms, vi)
    {
    	d = x; 
		r = y;
    }

    void xuat()
    {
        cout << "Dai" << setw(20) << "Rong" << setw(20) << "Mau sac" << setw(20) << "Vien" << endl;
        cout << d << setw(20) << r;
        hinh::xuat();
    }
};

int main()
{
    hcn a("Do", "Den", 5.0, 3.0);
    a.xuat();

    return 0;
}

