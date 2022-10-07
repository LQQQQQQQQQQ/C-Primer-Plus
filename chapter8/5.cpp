#include<iostream>
using namespace std;

template <typename T>
T max5(T arr[]);

int main(){
    int a[5] = {1, 5, 4, 2, 1};
    double b[5] = {1.2, 3.1, 3.3, 6.1, 5.2};
    cout << max5(a) << " " << max5(b) << endl;
    system("pause");
    return 0;
}

template <typename T>
T max5(T arr[]) {
    T tmp = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > tmp) tmp = arr[i];
    }
    return tmp;
}