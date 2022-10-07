#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

int main(void)
{
	chaff * p = new chaff[2];
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
	
	delete[] p;
	
	system("pause");
	return 0;
}