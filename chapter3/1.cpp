# include<iostream>
using namespace std;
# define MaxSize 80
int main(void)
{
    /* code */
    char firstName[MaxSize];
    char lastName[MaxSize];
    char Grade;
    int Age;

    cout << "What is your first name?";
    cin.getline(firstName, MaxSize);
    cout << "What is your last name?";
    cin.getline(lastName, MaxSize);
    cout << "what letter grade do you deserve?";
    cin >> Grade;
    cout << "what is your age?";
    cin >> Age;

    Grade = Grade + 1;

    cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << Grade << endl;
	cout << "Age: " << Age << endl;

    system("pause");
    return 0;
}
