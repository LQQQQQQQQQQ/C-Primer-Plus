#include "include/golf.h"
#include "src/golf.cpp"
#include <iostream>
using namespace std;
 
int main(void)
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
 
	golf andy;
	setgolf(andy);
	showgolf(andy);
	handicap(andy, 30);
	showgolf(andy);
 
	system("pause");
	return 0;
}