# include<iostream>
# include<string>
# include<cstring>
using namespace std;

int main(void)
{
    /* code */
    const int size = 50;
    // char f1[size];
    // char f2[size];
    string f1;
    string f2;
    // cin.getline(f1, size);
    // cin.getline(f2, size);
    getline(cin, f1);
    getline(cin, f2);
    // strcat(f2, ", ");
    // strcat(f2, f1);
    string res = f1 + ", " + f2;
    cout << res << endl;
    
    system("pause");
    return 0;
}
