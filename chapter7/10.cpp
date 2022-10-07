# include<iostream>
using namespace std;

// 使用 typedef 来定义一个函数指针类型，简化代码
typedef double (*func1)(double, double);

double add (double x, double y);
double sub (double x, double y);
double mul (double x, double y);
double caculate (double x, double y, func1);

int main(void)
{
    double x, y;
    // double (*pf[3])(double, double) = {add, sub, mul};
    func1 pf1[3] = {add, sub, mul};     // 与上面相同
    while (cin >> x >> y) {
        for (int i = 0; i < 3; i++) {
            cout << caculate(x, y, pf1[i]) << endl;
        }
    }

    system("pause");
    return 0;
}

double add (double x, double y) {
    return x + y;
}

double sub (double x, double y) {
    return x - y;
}

double mul (double x, double y) {
    return x * y;
}

double caculate (double x, double y, /*double (*func)(double, double)*/ func1 f) {
    // return (*func)(x, y);
    return f(x, y);
}