# include<iostream>
# include<string>
using namespace std;
static const int l = 30;

struct can
{
    string b;
    double w;
    int c;
};

void fill(can & cx, const char * a = "M...", 
            const double w = 2.85, const int c = 350);
void display(const can &);

int main(void)
{
    can cx1, cx2, cx3;
    fill(cx1);
    display(cx1);

    const char * m = new char[l];
    m = "DDDD";
    fill(cx2, m, 3.3, 110);
    display(cx2);

    const char * m2 = new char[l];
    m2 = "xxxxx";
    fill(cx3, m2, 31.3, 20);
    display(cx3);

    system("pause");
    return 0;
}

void fill(can & cx, const char * a, const double w, const int c){
    cx.b = a;
    cx.w = w;
    cx.c = c;
}

void display(const can & cx){
    // cout << cx.b << endl;
    // cout << cx.w << endl;
    // cout << cx.c << endl;
    cout << cx.b << cx.w << cx.c << endl;
}

