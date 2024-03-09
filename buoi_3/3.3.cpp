#include <iostream>
using namespace std;

class date
{
private:
    char d[3];
    char m[3];
    int y;

public:
    void nhap()
    {
        cout << "Nhap ngay: ";
        cin >> d;
        cout << "Nhap thang: ";
        cin >> m;
        cout << "Nhap nam: ";
        cin >> y;
    }

    void xuat()
    {
        cout << "Ngay thang nam da nhap la: " << d << "-" << m << "-" << y;
    }

    friend class hang;
};

class hang
{
private:
    char mahang[10];
    char tenhang[20];
    date ngaysx;

public:
    void nhap()
    {
        cout << "Nhap ma hang: ";
        cin.ignore(); // Xóa b? d?m d?u vào tru?c khi s? d?ng getline
        cin.getline(mahang, sizeof(mahang));
        cout << "Nhap ten hang: ";
        cin.getline(tenhang, sizeof(tenhang));
        ngaysx.nhap();
    }

    void xuat()
    {
        cout << "Ma hang da nhap la: " << mahang << endl;
        cout << "Ten hang da nhap la: " << tenhang << endl;
        ngaysx.xuat();
    }
};

int main()
{
    int n;
    cout << "Nhap so luong hang: ";
    cin >> n;

    hang *x = new hang[n];

    for (int i = 0; i < n; i++)
        x[i].nhap();

    for (int i = 0; i < n; i++)
        if (x[i].ngaysx.y == 2017)
        {
            x[i].xuat();
        }

    delete[] x;

    return 0;
}

