# include<iostream>
# include<string>
using namespace std;

void upper(string & s);

int main(void)
{
    string s;
    getline(cin, s);
    while (s != "q")
    {
        upper(s);
        cout << s << endl;
        getline(cin, s);
    }
    
    system("pause");
    return 0;
}

void upper(string & s) {
    for (int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
}
