#include <iostream>
template <typename T> T tinhtong(T &a, T &b) 
{
	return a+b;
}
using namespace std;
int main() 
{
	int num1 = 2, num2 = 3;
	float num3 = 2.5, num4 = 2.6; 
	char *num5 = "hello", *num6 = "xin chao";
	cout<<"Tong nguyen: "<< tinhtong(num1, num2)<<endl;
	cout<<"Tong thuc: "<< tinhtong(num3, num4)<<endl;
	cout<<"Tong thuc: "<< tinhtong(num5, num6)<<endl;
}

