#include<iostream>
#include<string>
#include<cstring>
// #include<cstring>
using namespace std;

template <typename T>
T maxn(T * arr, const int n);

template <> const char * maxn(const char * arr[], const int n);

int main(){
    int    a[6] = { 4,6,3,5,8,2 };
	double b[4] = { 2.3,5.4,1.3,6.2 };

    int c = maxn(a, sizeof(a) / sizeof(int));
    double d = maxn(b, sizeof(b) / sizeof(double));

    cout << c << " " << d << endl;

    const char* arr[7] = { "absaihc","chuahuiap","asjch cnck c","csamkc casj","fwef","a","bc" };
    const char* res = maxn(arr, 7);
    cout << res << endl;

    system("pause");
    return 0;
}

template <typename T>
T maxn(T * arr, const int n) {
    T tmp = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > tmp) tmp = arr[i];
    }
    return tmp;
}

template <> const char * maxn(const char * arr[], const int n) {
    const char * tmp = arr[0];
    for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i]) > strlen(tmp))
			tmp = arr[i];
	}
    return tmp;
}