# include<iostream>
# include<string>
using namespace std;

struct box
{
    char m[40];
    float h;
    float w;
    float l;
    float v;
};

void c_v(box * e) {
    e->v = e->h * e->w * e->l;
}

void display(box e) {
    cout << e.m << endl;
    cout << e.h << endl;
    cout << e.l << endl;
    cout << e.v << endl;
}

int main(void)
{
    box e;
    cin.get(e.m, 40);
    cin >> e.h;
    cin >> e.w;
    cin >> e.l;

    c_v(&e);
    display(e);

    system("pause");
    return 0;
}
