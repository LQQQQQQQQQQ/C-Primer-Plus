# include<iostream>
# include<array>
using namespace std;

int main(void)
{
    const int num = 3;
    array<double, num> score;
    cin >> score[0];
    cin >> score[1];
    cin >> score[2];

    for (int i = 0; i < num; i++) cout << score[i] << endl;

    double sum = 0;
    for (int i = 0; i < num; i++) sum += score[i];
    cout << sum / num << endl;

    system("pause");
    return 0;
}
