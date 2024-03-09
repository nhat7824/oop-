#include <iostream>
#include <iomanip>
using namespace std;

class sinhvien
{
private:
    char msv[20];
    char ten[20];
    char lop[20];
    char khoa[20];

    friend class phieubaodiem;
};

class bangdiem
{
private:
    char tenmon[30];
    int sotrinh;
    float diem;

    friend class phieubaodiem;
};

class phieubaodiem
{
private:
    sinhvien a;
    bangdiem *b;
    float diemtb;
    int n;
    float tu;
    float mau;

public:
    phieubaodiem()
    {
        b = nullptr;
    }

    ~phieubaodiem()
    {
        delete[] b;
    }

    void nhap()
    {
        cout << "Nhap ma sinh vien: ";
        cin.ignore(); // Add this line to consume the newline character from previous input
        cin.getline(a.msv, sizeof(a.msv));

        cout << "Nhap ten sinh vien: ";
        cin.getline(a.ten, sizeof(a.ten));

        cout << "Nhap lop: ";
        cin.getline(a.lop, sizeof(a.lop));

        cout << "Nhap khoa: ";
        cin.getline(a.khoa, sizeof(a.khoa));

        cout << "Nhap so mon: ";
        cin >> n;

        b = new bangdiem[n];
        if (b == nullptr)
        {
            cerr << "Memory allocation failed.\n";
            exit(EXIT_FAILURE);
        }

        for (int i = 0; i < n; i++)
        {
            cout << "Nhap ten mon: ";
            cin.ignore(); // Add this line to consume the newline character from previous input
            cin.getline(b[i].tenmon, sizeof(b[i].tenmon));

            cout << "Nhap so trinh: ";
            cin >> b[i].sotrinh;

            cout << "Nhap diem: ";
            cin >> b[i].diem;
        }
    }

    void xuat()
    {
        cout << setw(40) << "phieu bao diem!\n";
        cout << "Ma sinh vien:  " << a.msv << setw(20) << "Ten sinh vien:  " << a.ten << endl;
        cout << "Lop:  " << a.lop << setw(20) << "Khoa:  " << a.khoa << endl;
        cout << setw(15) << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << setw(15) << b[i].tenmon << setw(15) << b[i].sotrinh << setw(15) << b[i].diem << endl;
        }

        for (int i = 0; i < n; i++)
        {
            tu += b[i].sotrinh * b[i].diem;
            mau += b[i].sotrinh;
        }

        cout << setw(50) << "Diem trung binh  " << tu / mau << endl;
    }
};

int main()
{
    phieubaodiem a;
    a.nhap();
    a.xuat();

    return 0;
}
