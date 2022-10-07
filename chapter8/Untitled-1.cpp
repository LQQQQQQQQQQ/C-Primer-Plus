#include <iostream>
#include <string>
using namespace std;
 
template <typename T>
T maxn(T* arr, const int n);
 
//具体化
template<> const char* maxn(const char* arr[], const int n);
 
int main(void)
{
	int    a[6] = { 4,6,3,5,8,2 };
	double b[4] = { 2.3,5.4,1.3,6.2 };
 
	int c = maxn(a,sizeof(a)/sizeof(int));
	double d = maxn(b, sizeof(b) / sizeof(double));
 
	cout << "int数组中最大值为：" << c << endl;
	cout << "double数组中最大值为：" << d << endl;
 
	const char* arr[7] = { "absaihc","chuahuiap","asjch cnck c","csamkc casj","fwef","a","bc" };
    const char* f = maxn(arr, 7) ;
	cout << f << endl;
	system("pause");
	return 0;
}
template <typename T>
T maxn(T* arr, const int n)
{
	T temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
template<> const char* maxn(const char* arr[], const int n)
{
	const char* temp = arr[0];
 
	for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i]) > strlen(temp))
			temp = arr[i];
	}
	;
	return temp;
}