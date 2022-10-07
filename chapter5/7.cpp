# include<iostream>
# include<string>
using namespace std;

struct car
{
    string pro;
    int made;
};

int main(void)
{
    int num;
    cin >> num;
    cin.get();
    car * tmp = new car[num];
    for (int i = 0; i < num; i++) {
        getline(cin, tmp[i].pro);
        cin >> tmp[i].made;
        cin.get();
    }
    for (int i = 0; i < num; i++) cout << tmp[i].made << " " << tmp[i].pro << endl;

    system("pause");
    return 0;
}
