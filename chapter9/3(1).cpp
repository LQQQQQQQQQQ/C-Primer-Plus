#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int buf = 512;
char buffer[buf];

struct chaff
{
	char dross[20];
	int slag;
};

int main(void)
{
	chaff * p = new (buffer) chaff[2];
	char dross[20];
	for (int i = 0; i < 2; i++) {
		cin.getline(dross, 20);
		strcpy(p[i].dross, dross);
		cin >> p[i].slag;
		cin.get();
	}

	for (int i = 0; i < 2; i++)
	{
		std::cout << p[i].dross << " " << p[i].slag << std::endl;
	}
	
	
	system("pause");
	return 0;
}