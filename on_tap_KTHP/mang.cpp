#include <iostream>
#include <fstream>

using namespace std;

class Mang {
private:
    float* VALUE;
    int n;

public:
    Mang() {
        VALUE = NULL;
        n = 0;
    }
    friend istream& operator>>(istream& is, Mang& arr) {
        cout << "Nhap kich thuoc mang n: ";
        is >> arr.n;
        arr.VALUE = new float[arr.n];
        cout << "Nhap cac gia tri cho mang:\n";
        for (int i = 0; i < arr.n; ++i) {
            cout << "Nhap gia tri thu " << i + 1 << ": ";
            is >> arr.VALUE[i];
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, const Mang& arr) {
        os << "Mang: ";
        for (int i = 0; i < arr.n; ++i) {
            os << arr.VALUE[i] << " ";
        }
        os << endl;
        return os;
    }

    Mang operator++() {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (VALUE[j] > VALUE[j + 1]) {
                    // Swap
                    float temp = VALUE[j];
                    VALUE[j] = VALUE[j + 1];
                    VALUE[j + 1] = temp;
                }
            }
        }
        return *this;
    }

    // Phuong th?c toán t? -- s?p x?p m?ng theo chi?u gi?m d?n
    Mang operator--() {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (VALUE[j] < VALUE[j + 1]) {
                    // Swap
                    float temp = VALUE[j];
                    VALUE[j] = VALUE[j + 1];
                    VALUE[j + 1] = temp;
                }
            }
        }
        return *this;
    }
    ~Mang() 
	{
        delete[] VALUE;
    }
};

int main() {
    Mang mang;
    cin >> mang;
    Mang mangTangDan = ++mang;
    cout << "Mang da sap xep tang dan: " << mangTangDan;
    Mang mangGiamDan = --mang;
    cout << "Mang da sap xep giam dan: " << mangGiamDan;
    return 0;
}

