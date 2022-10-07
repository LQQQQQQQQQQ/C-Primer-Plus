# include<iostream>
# include<string>
using namespace std;

struct Pizza
{
    /* data */
    string name;
    float weight;
    float dia;
};


int main(void)
{
    Pizza *a = new Pizza;
    cin >> a->dia; cin.get();
    getline(cin, a->name);
    cin >> a->weight;
    cout << a->name << a->weight << a->dia << endl;
    delete a;
    system("pause");
    return 0;
}
